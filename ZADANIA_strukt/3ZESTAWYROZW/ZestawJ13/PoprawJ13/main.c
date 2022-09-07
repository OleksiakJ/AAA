#include <stdio.h>
#include <stdlib.h>

void funkcja(const int *a,const int *b)
{
    return *a+*b;
}

int main()
{
    int x=5,y=7;
    printf("%d",funkcja(&x,&y));
    return 0;
}
