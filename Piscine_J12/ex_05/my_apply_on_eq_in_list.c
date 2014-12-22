
/*
** my_apply_on_eq_in_list.c for my_apply_on_eq_in_list in /home/xxx/quicklisp/local-projects
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Mon Dec 22 19:06:37 2014 
** Last update Mon Dec 22 20:07:11 2014 
*/

int             my_apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)())
{
  while (begin)
    {
      if (!(cmp(begin->data, data_ref)))
        f(begin->data);
      begin = begin->next;
    }
  return (0);
}
