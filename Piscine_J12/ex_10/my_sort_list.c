/*
** my_sort_list.c for my_sort_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_06
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Wed Dec 24 18:02:06 2014 
** Last update Sun Dec 28 18:32:07 2014 
*/

#include	"../include/mylist.h"

t_list          **find_smallest(t_list **node, int (*cmp)())
{
  t_list        **smallest;

  smallest = node;
  while ((*node)->next)
    {
      if (cmp((*smallest)->data, (*node)->next->data) > 0)
        {
          smallest = &(*node)->next;
        }
      node = &(*node)->next;
    }
  return (smallest);
}

void            swap(t_list **head, t_list **smallest)
{
  t_list        *tmp;

  tmp = *smallest;
  *smallest = (*smallest)->next;
  tmp->next = *head;
  *head = tmp;
 return ;
}

void            set_head(t_list **head, int (*cmp)())
{
  t_list        **smallest;

  smallest = find_smallest(head, cmp);
  if (smallest != head)
    {
      swap(head, smallest);
    }
  return ;
}

int		my_sort_list(t_list **begin, int (*cmp)())
{
  t_list        *definitive_head;
  t_list        **head;
  t_list	**smallest;

  set_head(begin, cmp);
  definitive_head = *begin;
  head = &(*begin)->next;
  while ((*head)->next)
    {
      smallest = find_smallest(head, cmp);
      if (smallest != head)
        {
          swap(head, smallest);
        }
      head = &(*head)->next;
    }
  *begin = definitive_head;
  return (0);
}
