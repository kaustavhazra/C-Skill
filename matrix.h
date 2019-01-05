#include<stdio.h>
#include<conio.h>
int matrixsum(int m, int n)
    {
        int a[4][4],i,j;
        printf("\n enter matrix = ");
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n display of matrix is = ");
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                printf("%d",&a[i][j]);
            }
        }
        return 0;
    }
