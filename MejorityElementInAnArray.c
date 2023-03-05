#include<stdio.h>
int main()
{
  int a[] = { 1, 1, 1, 1, 2, 3, 4 };
  int s= sizeof(a)/sizeof(a[0]);
  int maj=a[0];
  int c=1;
  for(int i=1;i<s;i++)
  {
    
    if(a[i]==a[maj])
    {
        c++;
    }
    else
    {
        c--;
    }

    if(c==0)
    {
        maj=a[i];
        c=1;
    }
  }
  printf("%d",maj);
    return 0;
}