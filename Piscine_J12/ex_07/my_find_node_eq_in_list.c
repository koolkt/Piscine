/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list.c in /home/xxx/quicklisp/local-projects
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Mon Dec 22 22:33:55 2014 
** Last update Wed Dec 24 15:52:12 2014 
*/

t_list		*my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  if (data_ref == NULL)
    return (NULL);
  while (begin)
    {
      if (begin->data)
	if (!(cmp(begin->data, data_ref)))
	  return (begin);
      begin = begin->next;
    }
  return (NULL);
}
