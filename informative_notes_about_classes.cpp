// Important Links: https://www.geeksforgeeks.org/structure-vs-union-in-c/
//                  https://www.geeksforgeeks.org/constructors-c/

#include <iostream>

using namespace std;

/* 
class and struct are the same but have a difference which is:
- members of class is private by default.
- members of struct is public by default.

Also functions can be defined within class or struct.
*/

struct MyStruct {
    int digit;     // Public by default

    private:
        void func1(int n) {
            cout<< "Function called with n= " << n;
        }
        int size;    
};

class MyClass {
    int num;      // Private by default (cannot be used outside the class)
    public:
        char flag;
};


/*
The following regarding the class constructors:
- constructor can be defined with parameter-list using ":" operator or put those definitions inside the constructor block {...}
- benefit of parameter list is when assigning consts or refrences.
- parameter list is executed before the content of constructor block {...}
*/

class DummyClass {
    int num;     
    const int size;   // if we leave it like that, error will be thrown because const wasn't intialized. Therefore we must either intialize it or pass it in parameter-list of constructor.
    public:
        DummyClass(int s, char c) : size(s){   // same as constructor parameter passing in python ... but we added ":" operator.
            cout << "DummyClass is intialized with size= " << size << endl;
        }
        
};


int main(){
    MyClass o;
    MyStruct s;

// cannot do this in c++   DummyClass(s=2, c='x')  it is for python.
    DummyClass d(2,'x');

//    s.size = 4; cannot be called because it is private.
//    o.num = 5; it is private also
    s.digit = 10;
    cout << s.digit << endl;
}