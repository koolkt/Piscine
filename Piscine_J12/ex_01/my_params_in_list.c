/*
** my_params_in_list.c for my_params_in_list in /home/xxx/Piscine-Collection/Piscine/Piscine_J12
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Thu Dec 18 17:44:59 2014 
** Last update Thu Dec 18 23:35:33 2014 
*/

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
