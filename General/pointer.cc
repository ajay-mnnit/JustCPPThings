#include <iostream>

int main()
{
    int i = 10; // this memory is alocated on stack    
    int *p = &i;
    
    printf("i = %d\n", i);
    printf("*p = %d\n", *p);
    printf("&p = %d\n", &p);
    printf("p = %d\n", p);


    // this memory is alocated on heap
    /* 
    In C++, the new operator is used to allocate dynamic memory and construct an object.
    When you write new int(10), it dynamically allocates memory for an int object and initializes it with the value 10. 
    Although int is a built-in type and not a class, the new operator allows you to invoke a constructor implicitly for certain built-in types as if they were classes.

    This feature is known as "placement new" and is used to initialize an object in a specific memory location. 
    It treats the memory location as if it were an object and constructs the object using the specified value. 
    It allows you to initialize built-in types as if they were objects with constructors, 
    providing a consistent syntax for object initialization in C++.

    So, while int itself is not a class, the new operator with placement new syntax allows you to construct and initialize an int as if it were an object.
    */
    int *p2 = new int(10); // for older version of C++
    int *p3 = new int{100}; // for cpp version >= C++11

}