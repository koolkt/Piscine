/*
** tests-my_sort_list.c for my_sort_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_10
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 28 18:30:50 2014 
** Last update Sun Dec 28 18:31:42 2014 
*/

#include	"../include/mylist.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

void		free_list(t_list *node)
{
  t_list	*tmp;
  while (node)
    {
      tmp = node->next;
      free (node);
      node = tmp;
    }
  return ;
}

void		print_list(t_list *node)
{
  while(node)
    {
      printf("%s\n", node->data);
      node = node->next;
    }
  return ;
}

t_list		*create_list(char **tab)
{
  int		i;
  t_list	*node;
  t_list	*head;

  i = 0;
  if ((node = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  head = node;
  while (tab[i])
    {
      node->data = tab[i];
      if (tab[i + 1])
	{
	  if ((node->next = malloc(sizeof(t_list))) == NULL)
	    return (NULL);
	  node = node->next;
	}
      else
	{
	  node->next = NULL;
	}
      ++i;
    }
  return (head);
}

int		my_strcmp(const char *s1, const char *s2)
{
  while (*s1 == *s2)
    {
      if (*s1 == '\0')
	return (0);
      ++s1;
      ++s2;
    }
  return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
  t_list	*node;

  if (argc < 2)
    return (0);
  if ((node = create_list(argv + 1)) == NULL)
    return (0);
  my_sort_list(&node, my_strcmp);
  print_list(node);
  free_list(node);
  return (0);
}
