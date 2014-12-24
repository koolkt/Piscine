/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list.c in /home/xxx/quicklisp/local-projects
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Mon Dec 22 22:33:55 2014 
** Last update Wed Dec 24 16:54:00 2014 
*/

int		my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list	**past_next;
  t_list	*node_to_rm;
  t_list	*node;

  if (data_ref == NULL)
    return (-1);
  while (!(cmp((*begin)->data, data_ref)))
    {
      node_to_rm = *begin;
      *begin = (*begin)->next;
      free(node_to_rm);
    }
  past_next = &(*begin)->next;
  node = (*begin)->next;
  while (node)
    {
      if (!(cmp(node->data, data_ref)))
  	*past_next = node->next;
      past_next = &node->next;
      node = node->next;
    }
  return (0);
}
