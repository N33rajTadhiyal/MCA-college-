#include<stdio.h>
int main()
{
  int a[]={4,8,1,3,6,7,0,2};
  int n=sizeof(a)/sizeof(a[0]);
  
  for(int i=0;i<n;i++)
  {
    int pos =i;
    for (int  j = i; j < n; j++)
    {
        if(a[pos]>a[j])
        pos=j;
    }
    if(pos!=i)
    {
        int temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ",a[i]);
  }
  

    return 0;
}