/*
** my_getnbr_base.c for my_getnbr_base.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Sat Dec 13 04:00:03 2014 
** Last update Sat Dec 13 05:23:04 2014 
*/

int		test_base(char *base, char *hsh)
{
  int		i;

  i = 0;
  while (base[i])
    {
      if (hsh[base[i]])
	return (0);
      hsh[base[i]] = 1;
      ++i;
    }
  return (i);
}

int		test_str(char *str, char *hsh)
{
  int		i;

  i = 1;
  if (!hsh[str[0]] && str[0] != '-' && str[0] != '+')
    return (1);
  if (str[0] == '-' || str[0] == '+')
    while (str[i] == '-' || str[i] == '+')
      ++i;
  while (str[i])
    {
      if (!hsh[str[i]])
	return (1);
      ++i;
    }
  return (0);
}

int		power(int base,int exp)
{
  if (exp == 0)
    return (1);
  return (base * power(base, exp - 1));
}

int		getnbr(char *str, int nbase)
{
  char		is_neg;
  int		i;
  int		exp;
  int		result;

  result = 0;
  exp = 0;
  is_neg = 0;
  i = 0;
  while (str[i])
    {
      ++i;
    }
  --i;
  while (str[i] != '+' && str[i] != '+' && str[i])
    {
      result += (str[i] - 48) * power(nbase, exp);
      ++exp;
      --i;
    }
  if (str[i] == '-')
    result *=  -1;
  return (result);
}

int		my_getnbr_base(char *str, char *base)
{
  int		result;
  int		nbase;
  int		i;
  char		hsh[128] = {0};

  i = 0;
  if (!*base || !*str)
    result = 0;
  else if ((!(nbase = test_base(base, hsh))))
    result = 0;
  else if (test_str(str, hsh))
    result = 0;
  else
    result = getnbr(str, nbase);
  return (result);
}
