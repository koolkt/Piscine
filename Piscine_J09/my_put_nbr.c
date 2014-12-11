/*
** my_put_nbr.c for my_put_nbr.c in /home/xxx/Test
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 23:37:15 2014 xxx xxx
** Last update Fri Oct 24 00:10:43 2014 xxx xxx
*/

int	my_put_nbr(int nb)
{
  int zeros;
  int final_nb;
  
  zeros = 1;
  if (nb == 0)
    {
      my_putchar('0');
      return (0);
    }
  if (nb < 0)
    {
      nb *= -1;
      my_putchar('-');
    }
  final_nb = nb;
  while (final_nb > 0)
    {
      zeros *= 10;
      final_nb /= 10;
    }
  while (zeros > 1)
    {
      final_nb = (nb % zeros) / (zeros/10);
      zeros /= 10;
      final_nb += 48;
      my_putchar(final_nb);
      final_nb -= 48;
    }
}
