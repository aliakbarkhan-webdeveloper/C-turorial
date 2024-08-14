#include <iostream>
using namespace std;

int main(){
    int *myp;
    try
    {
        myp = new int[1000];
        std::cout << "memory space allocated\n"
                  << std::endl;
    }
    catch (...)
    {
        std::cout << "the error is handled here\n"
                  << std::endl;
    }

    // now delete all the memory that we allocated in previous code
    delete[] myp;
    std::cout << "memory space is deleted to avoid memory leak" << std::endl;
    return 0;
}