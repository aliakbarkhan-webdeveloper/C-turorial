#include <iostream>

void nullfn(int *val)
{
    printf("the value of nullpointer will be here %p", val);
}

int main()
{

    nullfn(nullptr);

    return 0;
}
