#include <iostream>

/*
In C++, the constexpr keyword is used to declare that an object or function can be evaluated at compile time.
 It is part of the constant expressions feature introduced in C++11. */
constexpr int calc(int num)
{
    if(num <= 1)
        return 1;

    return num * calc(num-1);
}

int main()
{ 
    constexpr int result = calc(10);  
    printf("Result: %d", result);
}   