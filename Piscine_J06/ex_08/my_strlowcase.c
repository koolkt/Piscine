/*
** my_strlowcase.c for my_strupcase.c in /home/xxx/Things_Learn/Algorithms/Standford
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Dec 10 18:46:57 2014 
** Last update Wed Dec 10 19:21:36 2014 
*/

char		*my_strlowcase(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if(str[i] > 64 && str[i] < 91)
	str[i] += 32;
      i++;
    }
  return (str);
}
