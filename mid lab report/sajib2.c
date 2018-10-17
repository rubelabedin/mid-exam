#include<stdio.h>
main()

{
    int a[10][10],b[10][10],i,j,rowA,colA,rowB,colB,sum[10][10];
    scanf("%d%d",&rowA,&colA);
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
           scanf("%d",&a[i][j]);
    }
    printf("\n MatrixA:\n");
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
     scanf("%d%d",&rowB,&colB);
    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colB; j++)
           scanf("%d",&a[i][j]);
    }
    printf("\n MatrixB:\n");
    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colB; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
        {
            sum[10][10]=sum[10][10]+a[10][10];
            printf("%d \t",sum[10][10]);
        }
        printf("\n");
    }

}

