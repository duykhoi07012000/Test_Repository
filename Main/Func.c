#include <stdio.h>
#include <stdlib.h>
int *Merge(int *a, int n1, int *b, int n2)
{
    int *c = malloc(sizeof(a)+sizeof(b));
    int i, j, cnt = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            c[cnt++] = a[i++];
        }
        else
        {
            c[cnt++] = b[j++];
        }
    }
    for(int k = i; k < n1; k++)
    {
        c[cnt++] = a[k];
    }
    for(int kk = j; kk < n2; kk++)
    {
        c[cnt++] = b[kk];
    }
    return c;
}

int *MergeSort(int a[], int n)
{
    if(n == 1)
    {
        return a;
    }
    int mid = n/2;
    int *a1 = malloc(sizeof(mid));
    int *a2 = malloc(sizeof(n-mid));
    for(int i = 0; i < mid; i++)
    {
        a1[i] = a[i];
    }
    for(int j = 0; j < n-mid; j++)
    {
        a2[j] = a[mid + j];
    }
    a1 = MergeSort(a1, mid);
    free(a1);
    a2 = MergeSort(a2, n-mid);
    free(a2);
    return Merge(a1, mid, a2, n-mid);
}

int main(void)
{
    // int b[] = {2, 5, 6};
    // int a[] = { 3, 8, 9, 10, 15, 20};
    // int *c = Merge(a, 6, b, 3);
    // for(int i = 0; i < 9; i++)
    // {
    //     printf("%d\t", c[i]);
    // }
    // free(c);
    int a[] = {15, 45, 1, 3, 5, 9, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int *b = MergeSort(a, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}