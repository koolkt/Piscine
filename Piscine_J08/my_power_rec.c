/*
** my_power_rec.c for my_power_rec.c in /home/xxx/Test/5P
** 
** Made by flores_a
** Login   <adolfo.flores@epitech.net>
** 
** Started on  Mon Oct  6 19:59:22 2014 xxx xxx
** Last update Mon Nov  3 20:10:53 2014 xxx xxx
*/

int	my_power_rec(int nb, int power)
{
  int	result;

  if (power == 0)
    result = 1;
  else if (power < 0)
    result = 0;
  else if (power == 0 && nb == 0)
    result = 0;
  else if (power == 1 || power == 0)
    result = nb;
  else
    result =nb * my_power_rec(nb, --power);
  return (result);
}
