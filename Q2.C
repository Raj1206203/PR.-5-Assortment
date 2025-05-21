#include<stdio.h>

int main()
{
    int i,j,large,row,column,a[10][10];

    printf("enter the value for row:");
    scanf("%d",&row);
    printf("enter the value for column:");
    scanf("%d",&column);

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    large = a[0][0];

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
        }
    }
    printf("the largest value is:%d",large);
    return 0;
}