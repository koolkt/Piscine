/*
** my_strcmp.c for my_strcmp.c in /home/xxx/Things_Learn/Algorithms/Standford
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Dec 10 16:48:39 2014 
** Last update Wed Dec 10 18:42:45 2014 
*/

int		sum(char *str, int n)
{
  int		i;
  int		res;

  i = 0;
  res = 0;
  if (str != 0)
    while (i < n)
    {
      res += str[i];
      ++i;
    }
  return (res);
}

int		my_strncmp(char *s1, char *s2, int n)
{
  int		sum1;
  int		sum2;
  int		result;

  result = 0;
  sum1 = sum(s1, n);
  sum2 = sum(s2, n);
  if (sum1 != sum2)
    result = (sum1 - sum2);
  return (result);
}
