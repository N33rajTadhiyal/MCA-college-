#include<stdio.h>
int Search(int [] ,int,int);

int main()
{
    int a[]={1,2,6,9,11,12,15,16,21,24,28,31,33,39,40,41,47,57,67,81,82,90,91,111};
    int k=57;
    int n=sizeof(a)/sizeof(a[0]);
     if(Search(a,k,n)!=-1)
     {
       printf("the key %d is at %d position",k,Search(a,k,n));
     }
     else{
        printf("the key %d dont exist bro",k);
     }
    return 0;
}
int Search(int a[],int k,int n){    
    
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==k)
        {
            return mid;
        }

        if(k>a[mid])
        {
          l=mid+1;
        }
        else{
         h=mid-1;
        }
    }


    return -1;

}