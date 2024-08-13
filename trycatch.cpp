#include <iostream>
using namespace std;
int main()
{
    float num = 5;

    try
    {
        cout << "1st code in try block\n";
        cout << "2nd code in try block\n";
        throw num;
        cout << "the code after throw error\n";
    }
    catch (int err)
    {
        std::cout << "the error cause by this num which should give value: " << num << std::endl;
    }
    catch (...)
    {
        std::cout << "all type of data error can be executed through this block" << std::endl;
    }
}