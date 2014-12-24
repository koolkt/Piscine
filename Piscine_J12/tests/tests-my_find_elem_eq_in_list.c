/*
** tests-my_find_elem_eq_in_list.c for my_find_elem_eq_in_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_06
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Wed Dec 24 15:15:53 2014 
** Last update Wed Dec 24 15:16:00 2014 
*/

#include	"../include/mylist.h"
#include	<stdlib.h>
#include	<unistd.h>

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  if(str == NULL)
    return (-1);
  while (str[i++])
    ;
  return (i);
}

int		my_putstr(char *str)
{
  return (write(1, str, my_strlen(str)));
}

t_list		*create_list(char **tab, int x)
{
  int		i;
  t_list	*prox;
  t_list	*node;

  i = 0;
  if ((node = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  node->next = NULL;
  while (tab[i])
    {
      node->data = tab[i];
      if (tab[i + 1] && (i + 1) != (x - 1))
	{
	  if ((prox = malloc(sizeof(t_list))) == NULL)
	    return (NULL);
	  prox->data = NULL;
	  prox->next = node;
	  node = prox;
	}
      i++;
      if (i == (x -1))
	i += 2;
    }
  return (node);
}

void		print_list(t_list *node)
{
  while (node)
    {
      my_putstr(node->data);
      node = node->next;
    }
  return ;
}

void		free_list(t_list *node)
{
  t_list	*next;
  
  if (node)
    while (node)
      {
	next = node->next;
	free (node);
	node = next;
      }
  return ;
}

int		my_strcmp(char *str1, char *str2)
{
  while (*str1 == *str2)
    {
      if (!(*str1))
	return (0);
      str1++;
      str2++;
    }
  return (*str1 - *str2);
}

int		search_ets(char **argv)
{
  int		i;

  i = 0;
  while (argv[i])
    {
      if (argv[i][1] == 's' && argv[i][0] == '-')
	{
	  if (argv[i + 1])
	    return (i + 1);
	  else
	    {
	      write(1, "No item to search especified\n", 29);
	      return (-1);
	    }
	}
      i++;
    }
  write(1, "No item to search especified\n", 29);
  return (-1);
}

int		main(int argc, char **argv)
{
  int		index_ets;
  char		*elem;
  t_list	*node;

  node = NULL;
  if (argc < 2)
    return (0);
  if ((index_ets = search_ets(argv)) < 0)
    return (-1);
  node = create_list(argv, index_ets);
  if ((elem = my_find_elm_eq_in_list(node, argv[index_ets], my_strcmp)) == NULL)
    {
      free_list(node);
      return (-1);
    }
  print_list(node);
  write(1,"\nRequested element :\n  ", 23);
  my_putstr(elem);
  write(1, "\n", 1);
  free_list(node);
  return (0);
}
