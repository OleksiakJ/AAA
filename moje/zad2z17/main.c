#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[n])
{
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0)
        {
            tab[i]=0;
        }
    }
}
void wypisz(int n, int tab[n])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",tab[i]);
    }
}

int main()
{
    int tab[5]={0,4,-3,-10,2};
    wypisz(5,tab);
    foo(5,tab);
    printf("======");
    wypisz(5,tab);


    return 0;
}
