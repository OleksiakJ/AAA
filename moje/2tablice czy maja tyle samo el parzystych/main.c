#include <stdio.h>
#include <stdlib.h>

int foo (int n, int tab1[n], int tab2[n])
{
    int x=0;
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]%2==1)
            x++;
        if(tab2[i]%2==1)
            y++;
    }
    if(x!=y)
        return 0;
    return 1;
}

int main()
{
    int tab1[5]={2,2,2,2,5};
    int tab2[5]={8,6,2,4,5};
    printf("%d",foo(5,tab1,tab2));
}
