/*
** tests-my_rev_list.c for my_rev_list in /home/xxx/Things_Learn/Algorithms
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 21 16:53:45 2014 
** Last update Sun Dec 21 16:54:19 2014 
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"../include/mylist.h"

t_list		*my_params_in_list(int ac, char **av)
{
  t_list	*prox;
  t_list	*node;
  int		i;

  i = 0;
  node = malloc(sizeof(t_list));
  node->next = NULL;
  while (i < ac)
    {   
      node->data = av[i++];
      if (i != ac)
	{
	  prox = malloc(sizeof(t_list));
	  prox->next = node;
	  node = prox;
	}
    }
  return (node);
}

int		main(int argc, char **argv)
{
  t_list	*begin;

  begin = my_params_in_list(argc, argv);
  my_rev_list(&begin);
  while(begin)
    {
      printf("%s ", begin->data);
      begin = begin->next;
      if (!begin)
	printf("\n");
    }
  return (0);
}
