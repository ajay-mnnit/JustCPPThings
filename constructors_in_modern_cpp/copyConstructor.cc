#include <iostream>

class test
{
private:
    int var1{2};
    int var2{3};
    std::string str1{"ajaykumar"};
    int check;
    char c ;

public:
    test() = default;//cout: inside test(int, int , string), inside test()
    // {
    //     printf("inside test() \n");
    // } 

    test(const test & obj)
    {
        printf("inside test(const test&) \n");
    }


    void print()
    {
        printf("values: %d, %d, %d, %c" , var1, var2, check, c);
    }

};


void method(test tst)
{
    // pass by value all create a copy of the object
}

test method2()
{
    test obj;
    return obj;
}


int add(int i, int j)
{
    printf("inside int add() \n");
    return i + j;
}
void add(int i)
{
    printf("inside void add() \n");
}


int main()
{ 
    test tst1;  //creates a new object;
    test tst2 = tst1; // calls copy constructor as it's creating new object
    test tst3(tst1); // call copy constructor as creating a new object

    tst1 = tst2; // does not call copy constructor
    printf("calling method: "); method(tst1);
    printf("calling method2: "); test tst4 = method2();

    tst4.print();
}