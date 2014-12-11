/*
** my_show_tab.c for mylib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 17:31:27 2014 
** Last update Mon Nov 10 17:46:01 2014 
*/

#include		"struct.h"
#include		<stdlib.h>

int			my_show_tab(struct s_stock_par *sarray)
{
  int			j;
  int			i;

  j = 0;
  i = 0;
  while (sarray[j].str)
    {
      if (sarray[j].size_param > 0)
	{
	  my_putstr(sarray[j].str);
	  my_putchar('\n');
	  my_put_nbr(sarray[j].size_param);
	  my_putchar('\n');
	  while (sarray[j].tab[i])
	    {
	      my_putstr(sarray[j].tab[i]);
	      my_putchar('\n');
	      ++i;
	    }
	}
      else
	my_putstr("0\n");
      i = 0;
      free(sarray[j].tab[0]);
      free(sarray[j].tab);
      free(sarray[j].copy);
      ++j;
    }
  free(sarray);
  return(0);
}
