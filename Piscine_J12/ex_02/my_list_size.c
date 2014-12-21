/*
** my_list_size.c for my_list_size.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12
** 
** Made by  Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Fri Dec 19 00:22:41 2014 
** Last update Fri Dec 19 00:25:55 2014 
*/

int	my_list_size(t_list *begin)
{
  int	i;

  i = 0;
  while (begin)
    {
      ++i;
      begin = begin->next;
    }
  return (i);
}
