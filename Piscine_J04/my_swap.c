/*
** my_swap.c for my_swap.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 10:48:34 2014 xxx xxx
** Last update Thu Oct 23 14:54:06 2014 xxx xxx
*/

int	my_swap(int *a, int *b)
{
  int	temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
  return (0);
}
