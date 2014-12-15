/*
** my_putchar.c for my_putchar.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 15:37:11 2014 xxx xxx
** Last update Thu Oct 23 15:45:33 2014 xxx xxx
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
