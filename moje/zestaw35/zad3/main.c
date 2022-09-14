#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[n][n])
{
    int przekatna=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            przekatna+=tab[i][i];
        }
    }
    if(przekatna==0)
        return 1;
    return 0;
}

int main()
{
    int tab[3][3]={{1,2,3},
                   {2,5,8},
                   {3,8,-6}};
    printf("%d\n",foo(3,tab));
    return 0;
}
