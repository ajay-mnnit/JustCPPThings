#include <iostream>


class Base {
public:
    Base()
    {
        std::cout<<"Base() Called"<<std::endl;
    }

    virtual ~Base() {
        // Destructor implementation
        std::cout<<"~Base() Called"<<std::endl;
    }
};

class Derived : public Base {
public:
    Derived()
    {
        std::cout<<"Derived() Called"<<std::endl;
    }

    ~Derived() override
    {
        // Destructor implementation
        std::cout<<"~Derived() Called"<<std::endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    delete basePtr; // Correctly calls the destructor of Derived because of vitual ~Base() desctructor

    return 0;
}
