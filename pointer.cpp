#include <iostream>
using namespace std;
int main()
{
    // int a = 50;
    // int *ptra;
    // ptra = &a;
    // cout << "ali " << *ptra;

    // int *merapointer;
    // merapointer=&a;
    // cout<<merapointer;

    // use of reference
    //  int *myp=&a;
    //  printf("the value of inter variable is: %d\n",a);
    //  printf("the value of pointer data is %p\n",myp);

    // refrence
    int a = 50;
    int &myref = a;
    myref = 70000;
    cout << "The value printed from reference is: " << a;

    return 0;
}