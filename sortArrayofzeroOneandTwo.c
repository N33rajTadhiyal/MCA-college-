#include <stdio.h>
void swap(int arr[],int a, int b);
int main()
{
  int a[]={1,2,0,1,0,0,1};
  int n =sizeof(a)/sizeof(a[0]);
  int p0=0,p1=0,p2=n-1;
   
   while(p1<=p2)
   {
    
    if(a[p1]==0)
    {
     swap(a,p0,p1);
     p1++;
     p0++;
    }
    else if(a[p1]==1)
    {
     p1++;
    }
    else{
      swap(a,p1,p2);
      p1++;
      p2--;
    }

   }

for(int i=0;i<n;i++)
{
    printf("%d  ",a[i]);
}

    return 0;
}

void swap(int arr[],int a, int b)
{
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}