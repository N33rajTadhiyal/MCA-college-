#include <stdio.h>
int Search(int [], int);
int main()
{
    int a[]={5,6,7,8,9,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    if(a[0]<a[n-1])
    {
       printf("its not rotated");
    }else{
       int k= Search(a,n-1);
       if(k==-1)
       {
        printf("there is some probluem with the code");
       }
       else{
        printf("%d time the array is rotated",k);
       }

    }
    return 0;
}
int Search(int a[], int n)
{
    int l = 0;
    int h = n;
    while (l <= h)
    {
        int mid=(l+h)/2;
        int next=(mid+1)%n;
        int pre=(mid+n-1)%n;
        if(a[mid]<=next && a[mid]<=pre)
        {
            return mid;
        }
        else if(a[mid]>a[h])
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        
    }

    return -1;
}