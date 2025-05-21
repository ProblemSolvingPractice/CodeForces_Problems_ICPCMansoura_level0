#include <iostream>
int main(){
float a = 3.4e38f;  // OK
float b = a * 2.0f;  // Overflow! (Exceeds ~3.4e38)
std::cout << b << std::endl;

int* ptr = new int(5); // this ptr stores the address of the first bit of allocated space. *ptr equals 5 now. 
int* ptr2 = new int[3]; // allocate 3 spaces (each space = int space = 4 bytes) total of 12 bytes . but when I type sizeof() 
int arr [3] = {1,2,3};

// The following doesn't throw error but it is bad-practice because sometimes you need to access by mistake a unauthorized value.
ptr[222]=1;   
ptr2[1]=23;
arr[100] = 200;

//
std::cout << arr[5] << " " << *(ptr+222) << " size: " << sizeof(*ptr) << std::endl; 

// sizeof(arr) gives the whole number of bytes of the allocated arr, sizeof(ptr2) gives the size of the address itself 8-bit word in this compiler.
std::cout << "arr size: " << sizeof(arr) << " ptr2 size: " << sizeof(ptr2) << std::endl;

delete [] ptr;
delete [] ptr2;

}