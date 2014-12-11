/*
** my_putstr.c for Pj8 in /home/xxx/Test/my_ls
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Fri Oct 31 18:42:18 2014 xxx xxx
** Last update Fri Oct 31 18:42:25 2014 xxx xxx
*/

void	my_putstr(char *str)
{
  if (str[0])
    {
      my_putchar(str[0]);
      my_putstr(str + 1);
    }
  return;
}
