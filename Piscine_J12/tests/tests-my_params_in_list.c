/*
** tests-my_params_in_list.c for tests for  in /home/xxx/Piscine-Collection/Piscine/Piscine_J12
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Thu Dec 18 23:35:18 2014 
** Last update Thu Dec 18 23:35:42 2014 
*/

#include	<stdlib.h>
#include	"../include/mylist.h"

int		main(int argc, char **argv)
{
  t_list	*node;

  node = my_params_in_list(argc, argv);
  while (node)
    {
      printf("%s\n", node->data);
      node = node->next;
    }
  return (0);
}
