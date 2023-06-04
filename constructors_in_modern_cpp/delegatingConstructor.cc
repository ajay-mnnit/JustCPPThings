#include <iostream>

class test
{
private:
    int var1{2};
    int var2{3};
    std::string str1{"ajaykumar"};

public:
    test():test(22, 33, "AJAYKUMAR") //cout: inside test(int, int , string), inside test()
    {
        printf("inside test() \n");
    }

    test(int a):test(a, 33, "AJAYKUMAR")
    {
        printf("inside test(int) \n");
    }

    test(int a, int b):test(a, b, "AJAYKUMAR")
    {
        printf("inside test(int , int) \n");
    }


    test(int a, int b, std::string str):var1(a), var2(b), str1(str)
    {
        printf("inside test(int, int, string) \n");
    }

};


int main()
{
    test tst;
    test tst1{1};
    test tst2{1, 2};
    test tst3{1, 2, "Ajay Kumar"};
}