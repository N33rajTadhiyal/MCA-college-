#include<stdio.h>
#include<math.h>
int max(int ,int);
int min(int ,int);
int main()
{
    int a[]={3,5,9,7,1,4,3};
    int minn=a[0];
    int prof=0;

    for(int i =0;i<6;i++)
    {
         minn = min(a[i],minn);
         int profit=a[i]-minn;
         prof=max(profit,prof);
    }
   
    printf("%d :min  %d ::prof",minn,prof);

    return 0;
}
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }else{
        return b;
    }
}

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }else{
        return b;
    }
}