#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[n])
{
    int ilosc=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]%2==1)
            ilosc++;
    }
    return ilosc;
}

int main()
{
    int tab[6]={1,2,3,4,5,6};
    printf("%d\n",foo(6,tab));
    return 0;
}
