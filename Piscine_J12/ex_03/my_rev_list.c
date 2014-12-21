/*
** my_rev_list.c for my_rev_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Fri Dec 19 00:27:19 2014 
** Last update Sun Dec 21 16:53:57 2014 
*/

int		my_rev_list(t_list* *begin)
{
  t_list	**prev;
  t_list	*tmp;
  t_list	*actual;

  actual = (*begin)->next;
  (**begin).next = NULL;
  prev = begin; /*just to add clarity*/
  while (actual)
    {
      tmp = actual->next;
      actual->next = *prev;
      *prev = actual;
      actual = tmp;
    }
  return (0);
}
