#include <iostream>

class Parent
{
    public:
    int a = 1;
};


class Child1: private Parent
{
    public:
    Child1()
    {
        printf("contr GrandChild \n");
        printf("a: %d \n",a);
    } 
};


class Child2: public Parent
{
};


class GrandChild: public Child1, public Child2
{
    public:
    GrandChild()
    {
        printf("contr child1 \n");
    }
};

int main()
{
    GrandChild grandChild;
    Child1 child1;
    Parent parent;

    printf("Parent: %d \n",sizeof(parent));
    printf("Child1 or Child2: %d \n",sizeof(child1));
    printf("GrandChild: %d \n",sizeof(grandChild));
    //printf("chlid1:: a: %d", child1.a); // Error, as parent inherited privatly

    //printf("GrandChild a: %d \n",grandChild.a);// diamond problem
}