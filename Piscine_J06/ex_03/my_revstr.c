/*
** my_revstr.c for my_revstr.c in /home/xxx/Test/Piscine_J06/ex_01
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Tue Dec  9 14:23:31 2014 
** Last update Tue Dec  9 15:19:39 2014 
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

char		*my_revstr(char *str)
{
  int		first;
  int		last;
  char		tmp;

  first = 0;
  last = my_strlen(str) - 1;
  while (first != last)
    {
      tmp = str[first];;
      str[first++] = str[last];
      str[last--] = tmp;
    }
  return (str);
}
