#include <iostream>
using namespace std;
int main()
{
    int a = 30;
    int *ptra;
    ptra = &a;
    cout << "ali " << *ptra;
    return 0;
}