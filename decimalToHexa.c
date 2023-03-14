#include<stdio.h>
int main()
{
   int num , rem , i=0,temp;
   char a[50];
   printf("Enter the number");
   scanf("%d",&num);
   temp=num;
   while(temp!=0)
   {
    rem=temp%16;

    if(rem<10)
    {
      a[i++]=48+rem;
    }
    else{
    a[i++]=55+rem;
    }
    
    temp=temp/16;

   }

   for(int j=i;j>=0;j--)
   {
    printf("%c",a[j]);
   }


    return 0;
}