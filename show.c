#include <stdio.h>
#include "../my_lib/library.h"

void print(char matrix[5][4])
{
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("%c", matrix[i][j]);
            ft_putchar(matrix[i][j]);
        }
        // printf("\n");
        ft_putchar(10);
    }
}
