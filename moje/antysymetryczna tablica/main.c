#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[n][m])
{
    if(n!=m)
        return 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((tab[i][j]!= -tab[j][i])||tab[i][i]!=0)
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tab[3][3]={{0,1,2},
                   {-1,0,3},
                   {-2,-3,0}};
    printf("%d",foo(3,3,tab));
    return 0;
}
