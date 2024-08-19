#include <iostream>
using namespace std;

int main()
{
    // create file
    FILE *myF = fopen("originalFile.txt", "a");//-> w mean write, r mean read, a mean append and there are more modes/flags
    fclose(myF);  //to avoid memory leakage
    // rename  file
    rename("originalFile.txt", "newFile.cpp");
    // removing file
    remove("newFile.txt");
    //adding data in file
    fputs(" My name is ali ",myF);
    return 0;
}
