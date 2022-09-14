#include <stdio.h>
#include <stdlib.h>


float foo(int n)
{
    float a = 1.0;
    float parzysty= a/9;
    float nieparzysty = -a/9;
    if(n%2==0)
        return parzysty;
    return nieparzysty;

}
int main()
{
    printf("%f",foo(11));
    return 0;
}
