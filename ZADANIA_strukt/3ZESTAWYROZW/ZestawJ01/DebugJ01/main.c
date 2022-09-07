#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b+1;
}

int main()
{
    int tab[] = {23,6,3,-7,20,22,8,1};
    int *wsk=tab-2;
    int b = *(wsk+=3); //b=
    int c = b+2; // b=  , c=
    int d = foo(&c,&b); // b=  , c=  , d=
    int e = (wsk+=-2)[-1]; // b=  , c=  , d=  , e=
    e = (d *= 2) + (c /= 2); // b=  , c=  , d=  , e=
    c = d - (b+=4); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    return 0;
}
