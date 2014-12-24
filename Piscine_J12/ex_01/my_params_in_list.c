/*
** my_params_in_list.c for my_params_in_list in /home/xxx/Piscine-Collection/Piscine/Piscine_J12
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Thu Dec 18 17:44:59 2014 
** Last update Wed Dec 24 15:49:13 2014 
*/

t_list		*my_params_in_list(int ac, char **av)
{
  t_list	*prox;
  t_list	*node;
  int		i;

  i = 0;
  if ((node = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  node->next = NULL;
  while (i < ac)
    {   
      node->data = av[i++];
      if (i != ac)
	{
	  if ((prox = malloc(sizeof(t_list))) == NULL)
	    return (NULL);
	  prox->next = node;
	  node = prox;
	}
    }
  return (node);
}
