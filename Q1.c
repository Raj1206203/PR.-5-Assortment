//Q.1 NEGATIVE ELEMENTS  IN 1D ARRAY 

#include<stdio.h>
int main()

{   
    int size=0;

    printf("enter arry size:");
    scanf("%d",&size);
    int arry[size],i;

    for(i=0;i<size;i++)
    {
        printf("enter value of arry[%d]:",i);
        scanf("%d",&arry[i]);
    }
     for(i=0;i<size;i++){
		if(arry[i]<0)
        {
			printf("%d ",arry[i]);
		}	
	}

    return 0;
}