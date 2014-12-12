/*
** my_str_isprintable.c for my_str_isprintable.c in
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Fri Dec 12 14:46:30 2014 
** Last update Fri Dec 12 17:15:57 2014 
*/

int		my_str_isprintable(char *str)
{
  int		i;

  i = 0;
  while(str[i])
    {
      if (str[i] < 32 || str[i] == 127)
	return (0);
      ++i;
    }
  return (1);
}
