/*
** tests-my_add_to_list.c for my_add_to_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_06
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Wed Dec 24 17:56:11 2014 
** Last update Wed Dec 24 18:00:42 2014 
*/

#include	"mylist.h"
#include	<unistd.h>
#include	<stdlib.h>

typedef struct	s_list
{
  char		data;
  struct s_list	*next;
}		t_list;

void		create_list1(t_list **node1)
{
  char		i;
  t_list	*head;
  
  i = 'a';
  if ((*node1 = malloc(sizeof(t_list))) == NULL)
    {
      *node1 = NULL;
	return ;
    }
  head = *node1;
  while (i <= 'c')
    {
      (*node1)->data = i;
      if (++i <= 'c')
	{
	  if (((*node1)->next = malloc(sizeof(t_list))) == NULL)
	    {
	      *node1 = NULL;
	      return ;
	    }
	  *node1 = (*node1)->next;
	}
      else
	(*node1)->next = NULL;
    }
  *node1 = head;
  return ;
}

void		create_list2(t_list **node2)
{
  char		i;
  t_list	*head;

  i = 'd';
   if ((*node2 = malloc(sizeof(t_list))) == NULL)
	return ;
   head = *node2;
    while (i <= 'f')
    {
      (*node2)->data = i;
      if (++i <= 'f')
	{
	  if (((*node2)->next = malloc(sizeof(t_list))) == NULL)
	    return ;
	  *node2 = (*node2)->next;
	}
      else
	(*node2)->next = NULL;
    }
    *node2 = head;
    return ;
}

void		print_list(t_list *node)
{
  while (node)
    {
      write(1, &node->data, 1);
      node = node->next;
    }
  write(1, "\n", 1);
  return ;
}

int		main(void)
{
  t_list	*node1;
  t_list	*node2;

  create_list1(&node1);
  create_list2(&node2);
  my_add_list_to_list(&node1, node2);
  print_list(node1);
  return (0);
}
