/*
** my_add_list_to_list.c for my_add_list_to_list.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J12/ex_06
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Wed Dec 24 16:59:00 2014 
** Last update Wed Dec 24 17:56:31 2014 
*/

int		my_add_list_to_list(t_list **begin1, t_list *begin2)
{
  while (*begin1)
    {
      begin1 = &(*begin1)->next;
    }
  *begin1 = begin2;
  return (0);
}
