#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void print_matrix(int s_x, int s_y, char matrix[s_x][s_y])
{
  int x;
  int y;

  x = 0;
  y = 0;
  while (x < s_x)
  {
    y = 0;
    while (y < s_y)
    {
      ft_putchar(matrix[x][y]);
      y++;
    }
    if(x != s_x - 1)
      ft_putchar(10);
    x++;
  }
}

int main()
{

  int s_x = 13;
  int s_y = 25;

  char matrix[s_x][s_y];
  int x = 0;
  int y = 0;

  while(x < s_x)
  {
    y = 0;
    while(y < s_y)
    {
      if((x == 0 && y == 0) || (x == s_x - 1 && y == 0))
      {
        matrix[x][y] = 'A';
      }
      else if ((x == 0 && y == s_y - 1) || (x == s_x - 1 && y == s_y - 1))
      {
        matrix[x][y] = 'C';
      }

      else if(y != 0 && y != s_y - 1 && x != 0 && x != s_x - 1)
      {
        matrix[x][y] = ' ';
      }
      else
      {
        matrix[x][y] = 'B';
      }
      y++;
    }
    x++;
  }

  print_matrix(s_x, s_y, matrix);
}
