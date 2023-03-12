#include <stdio.h>
int main()
{
    int a[] = {4, 6, 1, 2, 7, 8, 9, 10, 12, 3, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int minSofar = a[0], minind = 0;
    int maxSofar = a[0], maxind = 0;

    printf("the actual array :\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }


    for (int i = 0; i < n; i++)
    {
        if (minSofar > a[i])
        {
            minind = i;
            minSofar = a[i];
        }

        if (maxSofar < a[i])
        {
            maxind = i;
            maxSofar = a[i];
        }
    }
    
    int temp = a[minind];
    a[minind] = a[maxind];
    a[maxind] = temp;

    printf("\narray after swaping :\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}
