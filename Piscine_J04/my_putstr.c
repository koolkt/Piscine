/*
** my_putstr.c for my_putstr.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 15:12:40 2014 xxx xxx
** Last update Thu Oct 23 15:46:59 2014 xxx xxx
*/

int	my_putchar(char);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      ++i;
    }
  return (0);
}
