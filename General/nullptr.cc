#include <iostream>

void fun(int)
{
    printf("fun(int) called \n");
}

void fun(int *)
{
    printf("fun(int *) called \n");
}

int main()
{
    //nullptr is a literal representing a null poiter, it has a special type which is compatible with any pointer type, but cannot be coverted to an interger
    fun(nullptr); // fun(int *) will be called here

    //NULL has value 0
    //fun(NULL); //ambiguous, because it supports both overloads
}