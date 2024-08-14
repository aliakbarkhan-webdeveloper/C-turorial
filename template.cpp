#include <iostream>
using namespace std;

template<typename A>


A addme(A a,A b){
    return a+b;
}

int main() {

std::cout << addme(9,7) << std::endl;

    return 0;
}