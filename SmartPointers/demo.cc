#include <iostream>

class MyClass {
public:
    void myFunction() {
        printf("myclass::myFunction called \n");
    }
};

class MyWrapper {
private:
    MyClass* ptr;

public:
    MyWrapper(MyClass* p) : ptr(p) {}

    MyClass* operator->() const {
        return ptr;
    }
};

int main() {
    MyClass obj;
    MyWrapper wrapper(&obj);

    // Accessing a member function using ->
    wrapper->myFunction();

    return 0;
}
