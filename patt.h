#include<stdio.h>
#include<conio.h>
int patlowerleft(int m)
{
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int patlowerright(int m)
{
    int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(k=m;k>=i;k--)
        {
         printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int patupperleft(int m)
{
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=m;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int patupperright(int m)
{
    int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=m;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int pattriangle(int m)
{
    int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(k=m;k>=i;k--)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }

            for(j=2;j<=i;j++)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}

int patdimond(int m)
{
    int i,j,k;
    for(i=1;i<=m;i++)
    {
        for(k=m;k>=i;k--)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }

            for(j=2;j<=i;j++)
            {
                printf("*");
            }
        printf("\n");
    }
       for(i=2;i<=m;i++)
            {
                for(k=1;k<=i;k++)
                    {
                        printf(" ");
                    }
                    for(j=m;j>=i;j--)
                        {
                            printf("*");
                        }

                        for(j=m-1;j>=i;j--)
                            {
                                printf("*");
                            }
                printf("\n");
            }

    return 0;
}
