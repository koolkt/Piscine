/*
** tests-my_tests-my_apply_on_eq_in_list.c for my_apply_on_eq_in_list
** in /home/xxx/quicklisp/local-projects
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Mon Dec 22 20:06:59 2014 
** Last update Mon Dec 22 20:08:25 2014 
*/

#include	<unistd.h>
#include	<stdlib.h>
#include        "../include/mylist.h"

void		my_putstr(char *str)
{
  while (*str)
    {
      write(1, str++, 1);
    }
  return ;
}

int		my_strcmp(char *str1, char *str2)
{
  while(*str1 == *str2)
    {
      if (*str1 == '\0')
	return (0);
      ++str1;
      ++str2;
    }
  return (*str1 - *str2);
}

int		my_cap(char *str)
{
  if (*str >= 'a' && *str <= 'z')
    *str -= 32;
  return (0);
}

int             main(int argc, char **argv)
{
  int		i;
  t_list	*head;
  t_list	*node;

  i = 0;
  node = malloc(sizeof(t_list));
  head = node;
  if (argc < 2)
    return (0);
  while (argv[i])
    {
      node->data = argv[i];
      if (argv[++i])
	{
	  node->next = malloc(sizeof(t_list));
	  node = node->next;
	}
      else
	node->next = NULL;
    }
  my_apply_on_eq_in_list(head, my_cap, "hello", my_strcmp);
  while (head)
    {
      my_putstr(head->data);
      write(1, " ", 1);
      head = head->next;
      if (!head)
  	write(1, "\n", 1);
    }
  return (0);
}
