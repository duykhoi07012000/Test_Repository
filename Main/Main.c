#include <stdio.h>
#include <stdbool.h>
#define MAX 100
void NhapDSDac(int a[], int *n)
{
    printf("Nhap n: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatDSDac(const int a[], const int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d \t", i, a[i]);
    }
    printf("\n");
} 

int TimDauTien(int a[], int n, int x)
{
    int vt = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            vt = i;
            break;
        }
    }
    return vt;
}

bool ChenViTri(int a[], int *n, int vitri, int x)
{
    if(vitri < 0 || vitri > *n)
    {
        return false;
    }
    else
    {
        (*n)++;
        for(int i = (*n); i >= vitri; i--)
        {
            a[i] = a[i-1];
        }
        a[vitri] = x;
        return true;
    }
}

int main(void)
{
    int a[MAX];
    int n;
    int x;
    NhapDSDac(a, &n);
    XuatDSDac(a, n);
    printf("Nhap x = ");
    scanf("%d", &x);
    int vitri;
    printf("Nhap vi tri muon chen = ");
    scanf("%d", &vitri);
    printf("====Ket qua chen===");
    if(ChenViTri(a,&n,vitri,x) == true)
    {
        XuatDSDac(a,n);
    }
    // printf("Nhap x = ");
    // scanf("%d", &x);
    // int vt = TimDauTien(a, n, x);
    // if(vt == -1)
    // {
    //    printf("Khong tim thay"); 
    // }
    // else
    // {
    //     printf("Vi tri la %d", vt);
    // }
    return 0;
}