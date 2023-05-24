#include<stdio.h>
int main()
{
    int a[]={4,3,-6,1,4,5,-7,8};
  int n=8;
  int max=0;
  int current=0;

  for(int i=0;i<n;i++)
  {
    current+=a[i];
    if(current>max)
    {
        max=current;
    }
    if(current<0)
    {
        current=0;
    }
  }
  printf("%d",max);
    return 0;
}