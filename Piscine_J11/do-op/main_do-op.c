/*
** main_do-op.c for main-do-op.c in /home/xxx/Rendu/Piscine_C_J11/do-op
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Mon Oct 20 18:33:24 2014 xxx xxx
** Last update Tue Oct 21 22:33:22 2014 xxx xxx
*/

#include "../include/my.h"

int	main(int argc, char **argv)
{
  if (argc < 4)
    return(0);
  else if (argv[2][0] != 45 && argv[2][0] != 43 && argv[2][0] != 37 && argv[2][0] != 42 && argv[2][0] != 47)
    my_putchar('0');
  else if (my_getnbr(argv[3]) == 0 && argv[2][0] == '/' || argv[2][0] == '%')
    {
      if (argv[2][0] == '/')
	my_putstr("Stop : division by zero");
      if (argv[2][0] == '%')
	my_putstr("Stop : modulo by zero");
    }
  else
    my_put_nbr(evaluateArray(argv[2][0], my_getnbr(argv[1]), my_getnbr(argv[3])));
  my_putchar('\n');
}
