#include <iostream>
#include "Headers.hpp"
 
class B
{
    int val;

    public:
    B(int num):val(num){};
    friend void A::funA();
};

void A :: funA()
{
    B b(10);
    std::cout<<b.val<<std::endl;
} 


int main() 
{
    A objA; 
    objA.funA();
}