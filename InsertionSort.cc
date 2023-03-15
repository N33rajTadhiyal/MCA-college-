#include<stdio.h>
int main()
{
    int a[]={4,8,1,3,6,7,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    int j;

    for(int i =0;i<n;i++)
    {
        int k=a[i];
        j=i-1;
        while(j>=0 && k<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }

    for(int i =0;i<n;i++)
    printf("%d ",a[i]);



    return 0;
}