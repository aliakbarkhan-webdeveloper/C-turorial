#include <iostream>
using namespace std;

int main(){

int myArr[6]={5,3,2,3,4,5};
myArr[0]=10;
cout<<myArr[0]<<"\n";
*myArr=50;
cout<<myArr[0]<<"\n";

int *arrRef=myArr;
arrRef++;
*arrRef=80;
cout<<myArr[1]<<"\n";

arrRef++;
*arrRef=100;
cout<<myArr[2]<<"\n";

    return 0;
}