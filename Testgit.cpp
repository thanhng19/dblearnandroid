#include<stdio.h>
#include<conio.h>
#define MAX 100
 
 
/*Ham nhap vao ma tran*/
void nhap(int a[MAX][MAX],int d,int c)
{
    int i,j;
 
    for(i=0;i<d;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("nhap vao phan tu thu:%d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
 
/*Ham in ra ma tran*/
void xuat(int a[MAX][MAX],int d,int c)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
 
/*Nhan hai ma tran ne*/
void tich(int a[MAX][MAX],int b[MAX][MAX],int t[MAX][MAX],int da,int ca,int cb)
{
    int i,j,k;
    for(i=0;i<da;i++)
    {
        for(j=0;j<cb;j++)
        {
            t[i][j]=0;
            for(k=0;k<ca;k++)
            {
                t[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
 
/*Chuong trinh chinh ne*/
void main()
{
    clrscr();
    int a[MAX][MAX],b[MAX][MAX],t[MAX][MAX];
    int da,db,ca,cb,dc,cc;
    printf("Nhap vao so dong ma tran a:");
    scanf("%d",&da);
    printf("nhap vao so cot ma tran a:");
    scanf("%d",&ca);
    nhap(a,da,ca);
    printf("A:\n");
    xuat(a,da,ca);
    printf("Nhap vao so dong ma tran b:");
    scanf("%d",&db);
    printf("Nhap vao so cot cua ma tran b:");
    scanf("%d",&cb);
    nhap(b,db,cb);
    printf("B:\n");
    xuat(b,db,cb);
 
    tich(a,b,t,da,ca,cb);
    printf("Tich cua 2 ma tran la:\n");
 
    dc = da;
    cc = cb;
    xuat(t,dc,cc);
 
    getch();
}
