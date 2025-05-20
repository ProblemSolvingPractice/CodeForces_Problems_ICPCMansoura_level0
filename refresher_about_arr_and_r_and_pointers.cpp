#include <iostream>
using namespace std;

int main(){
int arr[] = {1,2,3};

// the following are the same
cout << arr << endl;
cout << sizeof(arr)/sizeof(arr[1]) <<endl;
cout << &arr[0] << endl;

int* ptr_to_first = arr;
// int* ptr_to_second = &arr[1]; # here define a pointer points to the location of first element in the array ... and value is the first element

for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){  // sizeof() returns number of bytes: sizeof(arr) --> 12 ... we want it to be 3
    cout << *(ptr_to_first+i) << " "; //ptr now stores the address ... *ptr store the value at that address
}
return 0;
}