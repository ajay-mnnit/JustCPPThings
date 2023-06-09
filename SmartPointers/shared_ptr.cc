#include <iostream>

class Data
{
private:
    int data;  /* data */

public: 
    Data():data(100){};

    void Fetch()
    {
        std::cout<< data<<std::endl;
    }

    void Update(int newData)
    {
        data = newData;
    }
};

template<typename T>
class Shared_ptr
{ 
    public:
        Shared_ptr() = default;

        Shared_ptr(T *obj): _dataPtr(obj)
        {
            printf("created \n");
            if(obj)
                _refCount = new size_t(1);
        }

        ~Shared_ptr()
        {
            if(*_refCount > 0)
            {
                (*_refCount)--;
                printf("Destructor refCount: %d \n", *_refCount);
                if(*_refCount == 0)
                {
                    printf("deleted \n");
                    delete _dataPtr;
                } 
            }
        }

        Shared_ptr (const Shared_ptr<T> &objCopy): _dataPtr(objCopy._dataPtr), _refCount(objCopy._refCount)
        {
            (*_refCount)++;
        }

        Shared_ptr& operator=(const Shared_ptr<T> &objCopy)
        {
            _dataPtr = objCopy._dataPtr;
            _refCount = objCopy._refCount;
            (*_refCount)++; 
            return *this;
        }
 
        T& operator*()
        {
            return *_dataPtr;
        }
        
        T* operator->()
        {
            return _dataPtr;
        }

        void print()
        {
            std::cout<<"location: "<<_dataPtr<<", ref count: "<<*_refCount<<std::endl;
        }
 
        private:
            T *_dataPtr;//  ptr = new Data();
            size_t *_refCount; 
};


int main()
{
    Data *obj = new Data();
    Shared_ptr<Data> s_ptr1(obj); 
    Shared_ptr<Data> s_ptr12 = s_ptr1; 
    Shared_ptr<Data> s_ptr32; // memory leak
    
    s_ptr32 = s_ptr1;

    s_ptr1->Fetch();
    s_ptr12->Fetch();
    s_ptr32->Fetch();
 
    s_ptr1->Update(11);
 
    s_ptr1->Fetch();
    s_ptr12->Fetch();
    s_ptr32->Fetch();
}