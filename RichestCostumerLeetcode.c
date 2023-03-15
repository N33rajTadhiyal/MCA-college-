#include<stdio.h>
int Max(int a , int b);
int main()
{
   int a[][3]={{1,2,3},{4,9,2},{5,5,1},{1,1,1}};
   int row =sizeof(a)/sizeof(a[0]);
   int col=sizeof(a[0])/sizeof(int);
    
    int person =0;
    int maxsel=0;
    for(int i=0;i<row;i++)
    {
        int sel=0;
        int oldsel;
        for (int j =0;j<col;j++)
        {
           sel+=a[i][j];
        }
        oldsel=maxsel;
        maxsel=Max(sel,maxsel);

        if(oldsel != maxsel)
        person=i+1;
    }

    printf("the max sellery is of :%d person that is %d",person,maxsel);

    return 0;
}
int Max(int a , int b)
{
    if(a>b)
    return a;

    else 
    return b;
}
