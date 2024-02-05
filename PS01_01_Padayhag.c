#include <stdio.h>
int main(){
    int r1,r2, c1,c2, m1[100][100], m2[100][100], sum[100][100], i, j;

    printf("Enter Size of Matrix 1: ");
    scanf("%d", &r1);
    scanf("%d", &c1);
    printf("Enter Size of Matrix 2: ");
    scanf("%d", &r2);
    scanf("%d", &c2);

    printf("Enter Matrix 1:\n");

    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {

            scanf("%d",&m1[i][j]);
        }

    printf("Enter Matrix 2: \n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {

            scanf("%d", &m2[i][j]);
        }
    printf("\nThe Matrix 1: \n");
    for(i=0;i<r1;++i)
        for(j=0;j<c1;++j)
        {
            printf("%d ",m1[i][j]);
             if(j==c1-1)
            {
                printf("\n");
            }
        }
         printf("The Matrix 2: \n");
    for(i=0;i<r2;++i)
        for(j=0;j<c2;++j)
        {
            printf("%d ",m2[i][j]);
             if(j==c2-1)
            {
                printf("\n");
            }
        }



    for(i=0;i<r1;++i)
        for(j=0;j<c1;++j)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }


    printf("The Output of Matrix N is: \n");

    for(i=0;i<r1;++i)
        for(j=0;j<c1;++j)
        {

            printf("%d ",sum[i][j]);

            if(j==c1-1)
            {
                printf("\n");
            }
        }

    return 0;
}
