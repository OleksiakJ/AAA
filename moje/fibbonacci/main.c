#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if((n==1)||(n==2))
        return 1;

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n=19;
    printf("%d wyraz ciagu Fib wynosi: %d\n",n,fib(n));
    return 0;
}
