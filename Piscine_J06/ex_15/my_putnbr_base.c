/*
** my_putnbr_base.c for my_putnbr_base.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Sat Dec 13 03:15:46 2014 
** Last update Sat Dec 13 03:52:52 2014 
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      ++i;
    }
  return (i);
}

int		my_putnbr_base(int nbr, char *base)
{
  char		str[12];
  int		nbase;
  int		i;

  i = 0;
  nbase = my_strlen(base);
  while (nbr > 0)
    {
      str[i] = base[nbr % nbase];
      nbr = nbr / nbase;
      ++i;
    }
  while (i--)
    {
      write(1, &str[i], 1);
    }
  return (nbr);
}
