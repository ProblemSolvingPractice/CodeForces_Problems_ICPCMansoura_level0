// Important Links: https://www.geeksforgeeks.org/arrow-operator-vs-dot-operator-in-cpp/

#include <iostream>

using namespace std;

/* 
Difference between arrow and dot operator is that:
- Object.member
- ptr->member    
*/

struct MyStruct {
    int digit;    
};

class MyClass {
    int num;      // Private by default (cannot be used outside the class)
    public:
        char flag;
};



int main(){
    MyClass c;
    MyStruct s;

    s.digit = 10;
    c.flag = 'y';

    cout << s.digit  << " " << c.flag << endl;

    MyClass* c_ptr = new MyClass();
    c_ptr->flag = 'n';
    cout << s.digit  << " " << c_ptr->flag << endl;

    MyStruct* s_ptr = &s;
    s_ptr->digit = 20;

    cout << s.digit << endl;   // we will notice digit changes in both s_ptr and s ... because they both point at the same memory location.
}