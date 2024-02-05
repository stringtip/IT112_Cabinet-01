#include <stdio.h>
int main(){
    int r, c, a[100][100], i, j,r1,c1,value;

    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }

    printf("These are now the inputed Elements\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
            {
            printf("%d ",a[i][j]);

            if(j==c-1)
                {
                printf("\n");
                }


            }
         printf("\nEnter the location where you wish to insert an element by entering what Row and Column\n");
         printf("What Row? ");
         scanf("%d",&r1);
         printf("What Column? ");
         scanf("%d",&c1);
         printf("\nEnter the value to insert\n");
         scanf("%d", &value);

    for(i=r-1;i>=r1-1;i--)
        for(j=c;j>=c1;j--)
        {

            a[i+1][j+1]=a[i][j];
            a[r1-1][c1-1]=value;
        }

    printf("The Resultant array is\n ");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d ",a[i][j]);

            if(j==c-1)
                {
                printf("\n");
                }
        }

}
