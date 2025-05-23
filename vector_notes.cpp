// Helpful link: https://www.geeksforgeeks.org/when-to-use-vector-instead-of-array-in-cpp/
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1,2,3};             // vectors are dynamically allocated and deleted
    for(int num: vec) // This for loop is equivalent to python: (for num in vec)
    {
        std::cout << num << " ";  
    }
    vec.push_back(4); 
    std::cout << vec[3] << " Size is: " << vec.size() << "\n";
    vec.pop_back();
    std::cout << " Size now is: " << vec.size() << "\n";
    return 0;
}