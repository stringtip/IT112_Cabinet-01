#include <stdio.h>

int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[100][100], second[100][100], multiply[100][100];


  // First Element
  printf("Enter number of rows and columns of first matrix: ");
  scanf("%d%d", &m, &n);

  // Second Element
  printf("Enter number of rows and columns of second matrix: ");
  scanf("%d%d", &p, &q);

  //Inserting Element in first element
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  // Inserting Element the second element
  printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);


  for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }


  return 0;
}
