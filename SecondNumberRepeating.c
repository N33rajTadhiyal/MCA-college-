#include <stdio.h>

int Repeating(int a[], int b, int n);
int Search(int a[], int b, int n);

int main()
{
    int a[] = { 2, 2,1,1, 3, 2, 5, 6, 2, 7, 7, 6};

    int n = sizeof(a) / sizeof(a[0]);

    int re[n],j=0;

    int count = 0, Secno = 0;
    

    for (int i = 0; i < n; i++)
    {

        if (Repeating(a, a[i], n) && (Search(re, a[i], n) == 0))
        {
            re[j] = a[i];
            j++;
            count++;
        }

        if (Repeating(a, a[i], n) && count == 2)
        {
            Secno = a[i];
            break;
        }
    }
     
    for(int i=0;i<n;i++)
    {
        printf("%d  ",re[i]);
    }

    printf("\n\nthe second repeating no in the array is : %d", Secno);
    return 0;
}

int Repeating(int a[], int b, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b && c == 0)
            c++;

        else if (a[i] == b && c > 0)
        {
            return 1;
        }
    }
    return 0;
}
int Search(int a[], int b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            return 1;
        }
    }

    return 0;
}