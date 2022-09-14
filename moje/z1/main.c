#include <stdio.h>
#include <stdlib.h>

void foo(const int*a, float b)
{
    printf("Funckja\n");
    printf("%d\n",*a);
    printf("%f\n",b);
}

int main()
{
    int const a = 75;
    int *wsk=&a;
    float b =7.7;
    foo(&a,b);
    return 0;
}
