/*
** my_getnbr.c for my_getnbr.c in /home/xxx/Test
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 23:31:02 2014 xxx xxx
** Last update Thu Oct 23 23:32:38 2014 xxx xxx
*/

void	stopIfLetter(char c, int *nb, int *dec)
{
  if ( c != '-' && c != '+' && c < 48 || c > 57)
    {
      *nb = 0;
      *dec = 1;
    }
}

void	isNeg(char c, char cp, int *flag)
{
  if (c == '-' && cp >= '0' && cp <= '9')
    *flag = 1;
}

void	addtonb(char c, char cm, char cm2, int *nb, int *dec)
{
  if (c >= '0' && c <= '9')
    {
      *nb += ((c - 48) * *dec);
      if (*nb == 147483648 && cm == '2' && cm2 == '-')
	{
	  *nb = (-2147483648);
	  return;
	}
      if (*nb < 0)
	{
	  *nb = 0;
	  return;
	}
      *dec *= 10;
      if (*dec < 0 || *dec >= 10000000000)
	{
	  *nb = 0;
	  return;
	}
    }
}

int	my_getnbr(char *str)
{
  int	nb;
  int	is_neg;
  int	i;
  int	dec;

  dec = 1;
  i = my_strlen(str) -1;
  is_neg = 0;
  nb = 0;
  while (i > -1)
    {
      stopIfLetter(str[i], &nb, &dec);
      isNeg(str[i], str[i + 1], &is_neg);
      addtonb(str[i], str[i- 1], str[i - 2], &nb, &dec);
      --i;
    }
  if (is_neg)
    nb *= -1;
  return (nb);
}
