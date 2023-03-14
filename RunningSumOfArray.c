#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int k[5];

    for(int i=0;i<5;i++)
    {
        if(i>0)
        {
        k[i]=a[i]+k[i-1];
        }
        else
        {
            k[i]=a[i];
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",k[i]);
    }
    return 0;
}
