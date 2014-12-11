/*
** my_strlen.c for pj8 in /home/xxx/Test/my_ls
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Fri Oct 31 18:39:58 2014 xxx xxx
** Last update Fri Oct 31 18:40:12 2014 xxx xxx
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
