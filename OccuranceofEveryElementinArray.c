#include <stdio.h>
#include <stdbool.h>
void Occ(int a[], int b, int n);
bool Search(int a[], int b, int n);
int main()
{
    int a[] = {1, 1, 2, 3, 3, 3, 4, 1, 1, 2, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int rep[n];

    for (int i = 0; i < n; i++)
    {
        if (Search(rep, a[i], n))
        {
            continue;
        }
        else
        {
            rep[i] = a[i];
            Occ(a, a[i], n);
        }
    }

    return 0;
}

void Occ(int a[], int b, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
            count++;
    }
    printf("%d came %d times\n", b, count);
}

bool Search(int a[], int b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            return true;
        }
    }

    return false;
}