#include <stdio.h>
int fac(int);
int main()
{
    int a= fac(5);
    printf("%d",a);
    return 0;
}

int fac(int a)
{
    if(a!=0)
    {
     return a*fac(a-1);
    }else{
        return 1;
    }
}