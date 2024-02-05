#include<stdio.h>
#include<conio.h>
void main()
{

	int arr[10][10], row, col, i, j;
	int row_del, col_del;
	printf("Enter number of row for Array (max 10) : ");
	scanf("%d",&row);
	printf("Enter number of column for Array (max 10) : ");
	scanf("%d",&col);
	printf("Now Enter %d*%d Array Elements:\n",row, col);
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The Array is :\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}


    printf("Enter the lcoation of the element you want to delete\n");
    printf("Row: ");
    scanf("%d",&row_del);
    printf("Col: ");
    scanf("%d",&col_del);

    for(i=row-1;i>=row_del-1;i--)
      for(j=col;j>=col_del;j--)
        {

            arr[i+1][j+1]=arr[i][j];
            arr[row_del-1][col_del-1]=NULL; // Inserting null values
        }


    printf("The Array is :\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
