#include <stdio.h>

void print(int (*matrix)[3]);

int main()
{
  int matrix[3][3];

  int whole_size = sizeof(matrix);
  int rows = sizeof(matrix)/sizeof(matrix[0]);
  int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);
  int one_of_the_rows_size = sizeof(matrix[0]);
  int one_of_the_columns_size = sizeof(matrix[0][0]);

  printf("whole size %d\n", whole_size);
  printf("one of the rows %d\n", one_of_the_rows_size);
  printf("one of the columns %d\n", one_of_the_columns_size);
  printf("rows size %d\n", rows);
  printf("columns size %d\n", columns);

  for(int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      matrix[i][j] = j;
    }
  }

  printf("columns size %d\n", columns);

  print(matrix);
}
