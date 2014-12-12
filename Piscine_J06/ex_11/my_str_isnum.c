/*
** my_str_isalpha.c for my_str_isalpha.c in /home/xxx/Things_Learn/Languages/C/Harvard/Cs61/cs61-lectures/l01
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Fri Dec 12 13:47:04 2014 
** Last update Fri Dec 12 14:11:13 2014 
*/

int		my_str_isnum(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      ++i;
    }
  return (1);
}
