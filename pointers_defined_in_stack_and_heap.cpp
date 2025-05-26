#include <iostream>
using namespace std;

void func(int &x) { x--; }

void func_ptr(int *y) { *y = *y + 1; }

int main() {
    int x = 2;
    cout << x << " " << &x << endl;  // 2 [address of x]
    func(x);
    cout << x << " " << &x << endl;   // 1 [same address]

    // FIX: Initialize ptr to point to valid memory
    int val = 2;        // Option 1: Stack memory
    int* ptr = &val;    // ptr now points to val

    int* ptr_heap = new int(2);  // Option 2: Heap memory (remember to delete later)

    cout << *ptr << " " << ptr << endl;  // 2 [address of val]
    func_ptr(ptr);
    cout << *ptr << " " << ptr << endl;  // 3 [same address]

    
    cout << *ptr_heap << " " << ptr_heap << endl;  // 2 [address of val]
    func_ptr(ptr_heap);
    cout << *ptr_heap << " " << ptr_heap << endl;  // 3 [same address]


    delete ptr_heap;  
}