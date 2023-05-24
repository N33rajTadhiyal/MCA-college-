#include<stdio.h>
int main()
{
   int a[]={1,2,1,3,3,4};
   int uni[6];
   int j=0;
   int k=2;

   for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
   {
     if(chek()==1)
     {
        uni[j]=a[i];
        j++;
     }

   }
 

    return 0;
}
int Check(int a[], int n,int k)
{
    int c=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==k)
        {
            return 1;
        }
    }
   


    return -1;
}