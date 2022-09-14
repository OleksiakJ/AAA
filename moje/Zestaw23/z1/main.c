#include <stdio.h>
#include <stdlib.h>

void fun(const int a, const int*b)
{
    printf("%d\n",a);
    printf("%d\n",*b);
}
int main()
{
    const int a=10;
    const int b=101;
    int *wsk;
    wsk=&b;
    fun(a,wsk);
    return 0;
}
