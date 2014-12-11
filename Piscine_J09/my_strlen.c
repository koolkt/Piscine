/*
** my_strlen.c for my_strlen.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 15:18:21 2014 xxx xxx
** Last update Thu Oct 23 15:20:24 2014 xxx xxx
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      ++i;
    }
  return (i);
}
