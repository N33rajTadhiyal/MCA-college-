#include<stdio.h>
int Search(int[],int ,int);

int main(){
  int a[]={1,1,2,3,4,4,4,4,5,6,7,7,8,8,9,9,9,11,11,12,12,12,12,14,14,14,14,14};
  int k=14;
  int n = sizeof(a)/sizeof(a[0]);
  if(Search(a,k,n)!=-1)
  {
    printf("the first occurance of %d is at %d index",k,Search(a,k,n));
  }
  else{
    printf("not found");
  }

    return 0;
}

int Search(int a[],int k, int n)
{
    int l=0;
    int h=n-1;
    int ind=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==k)
        {
            ind=mid;
            h=mid-1;
        }
        if(k>a[mid])
        {
          l=mid+1;
        }
        if(k<a[mid])
        {
          h=mid-1;
        }

    }
    return ind;
}