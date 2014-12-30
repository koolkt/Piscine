/*
** tests-my_put_elem_in_sort_list.c for my_put_elem_in_sort_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_10
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 28 18:51:28 2014 
** Last update Tue Dec 30 19:33:42 2014 
*/

#include        "../include/mylist.h"
#include        <stdlib.h>
#include        <unistd.h>


int             my_strcmp(const char *s1, const char *s2)
{
  while (*s1 == *s2)
    {
      if (!(*s1))
        return (0);
      ++s1;
      ++s2;
    }
  return (*s1 - *s2);
}

t_list          **find_smallest(t_list **head, int (*cmp)())
{
  t_list        **smallest;

  smallest = head;
  while ((*head)->next)
    {
      if (cmp((*smallest)->data, (*head)->next->data) > 0)
        smallest = &(*head)->next;
      head = &(*head)->next;
    }
  return(smallest);
}

void            swap(t_list **head, t_list **smallest)
{
  t_list        *smll_tmp;

  smll_tmp = *smallest;
  *smallest = (*smallest)->next;
  smll_tmp->next = *head;
  *head = smll_tmp;
  return ;
}

void            order_list(t_list **head, int (*cmp)())
{
  t_list        **smallest;

  while ((*head)->next)
    {
      smallest = find_smallest(head, my_strcmp);
      if (smallest != head)
        {
          swap(head, smallest);
        }
      head = &(*head)->next;
    }
  return ;
}

int             my_strlen(const char *str)
{
  int           i;

  i = 0;
  while(str[i++])
    ;
  return(i);
}

int             my_putstr(const char *str)
{
  return (write(1, str, my_strlen(str)));
}

void            print_list(const t_list *node)
{
  while (node)
    {
      my_putstr(node->data);
      write(1, "\n", 1);
      node = node->next;
    }
  return ;
}

t_list          *create_list(char **argv)
{
  t_list        *head;
  t_list        *node;
  int           i;

  i = 0;
  while (argv[i])
    {
      if (i == 0)
        {
          if ((node = malloc(sizeof(t_list))) == NULL)
            return (NULL);
          head = node;
        }
      node->data = argv[i];
      if (argv[i + 1])
        {
          if ((node->next = malloc(sizeof(t_list))) == NULL)
            return (NULL);
          node = node->next;
        }
      else
        node->next = NULL;
      ++i;
    }
  return (head);
}

void            free_list(t_list *node)
{
  t_list        *tmp;
  
  while (node)
    {
      tmp = node;
      node = tmp->next;
      free(tmp);
    }
  return ;
}

int             main(int argc, char **argv)
{
  t_list        *node;
  t_list        **smallest;

  if (argc < 2)
    return (0);
  node = create_list(argv);
  smallest = find_smallest(&node, my_strcmp);
  order_list(&node, my_strcmp);
  my_putstr("smallest :\n\n");
  my_putstr((*smallest)->data);
  my_putstr("\n\n");
  my_putstr("list W/O element:\n\n");
  print_list(node);
  my_put_elem_in_sort_list(&node, ".a", my_strcmp);
  my_putstr("\nlist with element:\n\n");
  print_list(node);
  write(1, "\n", 1);
  free_list(node);
  return (0);
}
