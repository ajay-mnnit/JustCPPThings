#include <iostream>

class test
{
private:
    int var1{2};
    int var2{3};
    std::string str1{"ajaykumar"};

public:
    test() //cout: inside test(int, int , string), inside test()
    {
        printf("inside test() \n");
    } 

    // it's mamber function, invocked when we assign an object to other 
    test& operator=(const test &obj)
    {
        printf("inside test& assignment=(const test&) \n");
        return *this;
    }


    void print()
    {
        printf("values: %d, %d " , var1, var2);
    }

};

int main()
{ 
    //tst1 = tst2 ==> tst1.assignment=(tst2);  // tst1 has the same values as tst2
    test tst1;  //creates a new object;
    test tst2, tst3;
    tst2 = tst3 = tst1;  // assignment operator = ; right to left tst2 = (tst3 = tst1)
}