/*
** my_str_isupper.c for my_str_isupper.c in
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Fri Dec 12 14:20:32 2014 
** Last update Fri Dec 12 14:33:42 2014 
*/

int		my_str_isupper(char *str)
{
  int		i;

  i = 0;
  while(str[i])
    {
      if (str[i] < 'A' || str[i] > 'Z')
	return (0);
      ++i;
    }
  return (1);
}
