#include <stdio.h>
#include <stdlib.h>

float foo (int n, float tab[n])
{
    float min=tab[0];
    float max=tab[0];
    for(int i=0;i<n;i++)
    {
        if(min>tab[i])
            min = tab[i];
        if(max<tab[i])
            max = tab[i];
    }
    return max-min;
}

int main()
{
    float tab[5]={1.2, 5.6, 3.4 ,4.4 ,10.2};
    printf("%f\n",foo(5,tab));
    return 0;
}
