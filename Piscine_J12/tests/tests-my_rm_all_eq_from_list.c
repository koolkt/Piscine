/*
** tests-my_rm_all_eq_from_list.c for my_rm_all_eq_from_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_06
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Wed Dec 24 16:53:46 2014 
** Last update Wed Dec 24 16:55:21 2014 
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"../include/mylist.h"

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i++])
    ;
  return (write(1, str, i));
}

void		print_list(t_list *node)
{
  while (node)
    {
      my_putstr(node->data);
      write(1, "\n", 1);
      node = node->next;
    }
  return ;
}

t_list		*create_list(char **tab)
{
  int		i;
  t_list	*node_past;
  t_list	*node;

  i = 0;
  if ((node = malloc(sizeof(t_list))) == NULL)
    return (0);
  node->next = NULL;
  while (tab[i])
    {
      node->data = tab[i];
      if (tab[++i])
	{
	  node_past = node;
	  if ((node = malloc(sizeof(t_list))) == NULL)
	    return (0);
	  node->next = node_past;
	}
    }
  return (node);
}

int		my_strcmp(char *s1, char *s2)
{
  while (*s1 == *s2)
    {
      if (!(*s1))
	return (0);
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}

void		free_list(t_list *node)
{
  t_list	*next_node;
  
  while(node)
    {
      next_node = node->next;
      free(node);
      node = next_node;
    }
  return ;
}

int		main(int argc, char **argv)
{
  t_list	*node;

  if (argc < 2)
    return (0);
  node = create_list(argv);
  my_rm_all_eq_from_list(&node, "hello", my_strcmp);
  print_list(node);
  write(1, "\n", 1);
  free_list(node);
  return (0);
}
