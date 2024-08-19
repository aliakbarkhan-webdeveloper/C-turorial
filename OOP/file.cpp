#include <iostream>
using namespace std;



int main()
{
    //create file
   FILE *myF=fopen("originalFile.txt","w");
   fclose(myF);

   //rename  file
   rename("originalFile.txt","newFile.cpp");
   //removing file
   remove("newFile.txt");
    return 0;
}
