#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[n][m])
{
    if(n!=m)
        return 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(tab[i][j]!=tab[j][i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int tab[3][3]={{1,2,3},
                   {2,4,5},
                   {3,5,6}};
    int tab2[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    printf("%d\n",foo(3,3,tab));
    printf("%d\n",foo(3,3,tab2));

    return 0;
}
