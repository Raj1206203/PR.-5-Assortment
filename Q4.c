#include<stdio.h>
int main()
{
    int i,j,row,column,a[10][10];

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

    int row_num,column_num,sum1=0,sum2=0;

    printf("enter row number:");
    scanf("%d",&row_num);

    if(row_num<=row);
    {
        printf("row %d :",row_num);
        for(j=0 ;j<column;j++)
        {
            printf("%d",a[row_num][j]);
            sum1 += a[row_num][j];
        }
        
    }
    printf("\n sum of row is %d: %d",row_num,sum1);
    printf("\n \n");


    printf("enter column number:");
    scanf("%d",&column_num);

    if(column_num <=column)
    {
        printf("column %d: ",column_num);
        for(i=0 ; i<row ; i++)
        {
            printf("%d",a[i][column_num]);
            sum2 +=a[i][column_num];
        }
    }
    printf("\n sum of row %d: %d",column_num,sum2);
    printf("\n \n");




    return 0;
}