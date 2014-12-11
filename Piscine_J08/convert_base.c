/*
** convert_base.c for my_lib in /home/xxx/Test/my_ls
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Sat Nov  1 11:06:25 2014 xxx xxx
** Last update Mon Nov  3 20:38:30 2014 xxx xxx
*/
#include <stdlib.h>
#include "super.h"

char	ifhex(int rest)
{
  if(rest == 10)
    return('A');
  if(rest == 11)
    return('B');
  if(rest == 12)
    return('C');
  if(rest == 13)
    return('D');
  if(rest == 14)
    return('E');
  if(rest == 15)
    return('F');
}

char	*convert_base10(int nbr, int base_to)
{
  int	resdiv;
  int	i;
  char	*result;

  i = 1;
  resdiv = nbr;
  while (resdiv > 0)
    {
      resdiv = resdiv / base_to;
      ++i;
    }
  if ((result = malloc(sizeof(char) * i)) == NULL)
    return (0);
  result[i] = '\0';
  --i;
  resdiv = nbr;
  while (resdiv > 0)
    {
      if ((resdiv % base_to) > 9)
	result[--i] = ifhex(resdiv % base_to);
      else
	result[--i] = (resdiv % base_to) + 48;
      resdiv /= base_to;
    }
  return (result);
}

void	hexnum(char c, int *j, int *nb, int base_from)
{
  if (c == 'A')
    {
      *nb += ( 10 * (my_power_rec(base_from, *j)));
    }
  if (c == 'B')
    {
      *nb += ( 11 * (my_power_rec(base_from, *j)));
    }
  if (c == 'C')
    {
      *nb += ( 12 * (my_power_rec(base_from, *j)));
    }
  if (c == 'D')
    {
      *nb += ( 13 * (my_power_rec(base_from, *j)));
    }
  if (c == 'E')
    {
      *nb += ( 14 * (my_power_rec(base_from, *j)));
    }
  if (c == 'F')
    {
      *nb += ( 15 * (my_power_rec(base_from, *j)));
    }
  return;
}

int	convert_basex(char *str, int base_from)
{
  int	nb;
  int	is_neg;
  int	i;
  int	j;

  j = 0;
  i = my_strlen(str) -1;
  is_neg = 0;
  nb = 0;
  while (i > -1)
    {
      if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	is_neg = 1;
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nb += ((str[i] - 48) * (my_power_rec(base_from, j)));
	}
      hexnum(str[i], &j, &nb, base_from);
      --i;
      ++j;
    }
  if (is_neg)
    nb *= -1;
  return (nb);
}

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  int	strd;
  char	*result;

  if (my_getnbr(base_from) == 10)
    {
      return(convert_base10(my_getnbr(nbr), my_getnbr(base_to)));
    }
  if (my_getnbr(base_from) != 16)
    {
      strd = convert_basex(nbr, my_getnbr(base_from));
      result =  convert_base10(strd, my_getnbr(base_to));
    }
  return (result);
}
