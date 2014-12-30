/*
** my_put_elem_in_sort_list.c for my_put_elem_in_sort_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_10
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 28 18:38:53 2014 
** Last update Mon Dec 29 11:41:52 2014 
*/

#include        "../include/mylist.h"
#include        <stdlib.h>

t_list          *create_node(void *data)
{
  t_list        *node;

  if ((node = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  node->data = data;
  node->next = NULL;
  return (node);
}

void            insert_node(t_list *node, t_list **head, int (*cmp)())
{
  if (cmp(node->data, (*head)->data) <= 0)
    {
      node->next = *head;
      *head = node;
    }
  else
    {
      while (*head)
        {
          if (cmp(node->data, (*head)->next->data) <= 0)
            {
              node->next = (*head)->next;
              (*head)->next = node;
              return ;
            }
          head = &(*head)->next;
        }
    }
  return ;
}

int             my_put_elem_in_sort_list(t_list **begin, void *data, int (*cmp)())
{
  t_list        *node;

  if (!(node = create_node(data)) || !(*begin)
      || !begin || !data || !cmp || !(*(char*)data))
    return (-1);
  insert_node(node, begin, cmp);
  return (0);
}
