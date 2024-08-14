#include <iostream>
#include "head.h"
using namespace std;


int lifeVal(int *life){
    ++(*life);
    return *life;
}

int refAccept(int &ref){
++(ref);
    return 0;
}
int main(){
    int life=4;
    lifeVal(&life);
    int ref=18;
    refAccept(ref);
    

    std::cout << life << std::endl;
    std::cout << ref << std::endl;
std::cout << add(3,8) << std::endl;
    return 0;
}