#include<stdio.h>
void swap(int [],int,int);
int main()
{	
    int a[]={-1,-23,-13,3,-5,7,1,-4};
    
    int n=sizeof(a)/sizeof(a[0]);
    int i,l=0,h=n-1;
 
    while(l<=h)
    {
    	if(a[l]<0 && a[h]>0)
    	{
    		l++;
    		h--;
		}	
		else if(a[l]>0 && a[h]<0 )
		{
			swap(a,h,l);
			l++;
			h--;
		}
		else if(a[l]<0 && a[h]<0)
		{
			l++;
		}
		else{
			h--;
		}
	}

   printf("\n");

    for (i =0;i<n;i++)
    {
    printf("%d ",a[i]);
    }



    return 0;
}
void swap(int a[],int i, int j)
{
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}
