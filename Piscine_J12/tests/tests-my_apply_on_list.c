/*
** tests-my_apply_on_list.c for my_aply_on_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_04
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Sun Dec 21 21:33:16 2014 
** Last update Sun Dec 21 21:33:44 2014 
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"../include/mylist.h"

int		my_cap(void *str)
{
  if (*(char*)str >= 'a' && *(char*)str <= 'z')
    *(char*)str -= 32;
  return (0);
}

int		my_putstr(void *str)
{
  while(*(char*)str)
    write(1, str++, 1);
  return (0);
}

int		main(int argc, char **argv)
{
  int		i;
  t_list	*head;
  t_list	*node;

  i = 0;
  if (argc < 2)
    return (0);
  head = malloc(sizeof(node));
  node = head;
  while(argv[i])
    {
      node->data = argv[i];
      if (argv[i + 1])
	{
	  node->next = malloc(sizeof(node));
	  node = node->next;
	}
      else
	node->next = NULL;
      i++;
    }
  my_apply_on_list(head, my_putstr);
  /* while(head) */
  /*   { */
  /*     //my_cap(head->data); */
  /*     my_putstr(head->data); */
  /*     write(1, " ", 1); */
  /*     head = head->next; */
  /*     if (!head) */
  /* 	write(1, "\n", 1); */
  /*   } */
  return (0);
}
