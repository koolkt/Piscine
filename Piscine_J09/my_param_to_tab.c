/*
** my_param_to_tab.c for my_lib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 14:36:35 2014 
** Last update Mon Nov 10 22:33:04 2014 
*/

#include		"struct.h"

struct s_stock_par	*my_param_to_tab(int ac, char **av)
{
  struct s_stock_par	*sarray;

  if ((sarray = malloc(sizeof(struct s_stock_par) * (ac + 1))) == NULL)
    return (NULL);
  sarray[ac].str = '\0';
  while (ac--)
    {
      sarray[ac].size_param = my_strlen(av[ac]);
      sarray[ac].str = &(av[ac][0]);
      sarray[ac].copy = my_strcp(sarray[ac].str);
      sarray[ac].tab = my_str_to_wordtab(av[ac]);
    }
  return (sarray);
}
