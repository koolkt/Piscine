/*
** my_putchar.c for pj9 in /home/xxx/Test/my_ls
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Fri Oct 31 17:29:02 2014 xxx xxx
** Last update Fri Oct 31 17:31:39 2014 xxx xxx
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return(0);
}
