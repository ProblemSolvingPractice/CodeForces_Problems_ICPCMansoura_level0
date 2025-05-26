//https://www.geeksforgeeks.org/cpp-functions-pass-by-reference/
#include <iostream>
using namespace std;

void func(int &x){
     x--;
}

void func_ptr(int *y){
    *y = *y + 1;
}

int main(){
    int x = 2;
    cout<< x << " " << &x << endl;
    func(x);
    cout<< x << " " << &x << endl;

    int* ptr;
    *ptr = 2;
    cout<< *ptr << " " << ptr << endl;
    func_ptr(ptr);
    cout<< *ptr << " " << ptr << endl;

}