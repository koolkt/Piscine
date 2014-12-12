/*
** my_str_islower.c for my_str_islower.c in /home/xxx/Things_Learn/Languages/C/Harvard/Cs61/cs61-lectures/l01
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Fri Dec 12 14:12:23 2014 
** Last update Fri Dec 12 14:19:06 2014 
*/

int		my_str_islower(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 'a' || str[i] > 'z')
	return (0);
      ++i;
    }
  return (1);
}
