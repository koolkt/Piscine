/*
** my_apply_on_list.c for my_apply_on_list.c in /home/xxx/Things_Learn/Algorithms
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 21 19:53:45 2014 
** Last update Sun Dec 21 21:36:33 2014 
*/

int		my_apply_on_list(t_list *begin, int (*f)(void*))
{
  while (begin)
    {
      f(begin->data);
      begin = begin->next;
    }
  return (0);
}
