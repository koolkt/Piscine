/*
** my_sort_wordtab.c for my_sort_wordtab.c in /usr/share/themes/Paper/gtk-3.0
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Dec 15 18:11:41 2014 
** Last update Thu Dec 18 15:24:35 2014 
*/

int		my_strcmp (const char * s1, const char * s2)
{
  while(*s1 == *s2)
    {
      if(*s1 == '\0')
	return (0);
      ++s1;
      ++s2;
    }
  return (*s1 - *s2);
}

void		swap(char **str1, char **str2)
{
  char		*tmp;

  tmp = *str1;
  *str1 = *str2;
  *str2 = tmp;
  return ;
}

int		is_sorted(char **tab)
{
  while (*tab++)
    {
      if (my_strcmp(tab[0], tab[1]) > 0)
      	return (0);
    }
  return (1);
}

int		my_sort_wordtab(char **tab)
{
  int		size;
  int		bgst;
  int		i;

  size = 0;
  if (is_sorted(tab))
    return (0);
  while (tab[++size]);
  bgst = size - 1;
  while (size-- > 1)
    {
      i = 0;
      while (i <= size)
	{
	  if (my_strcmp(tab[bgst], tab[i]) < 0)
	    bgst = i;
	  ++i;
	}
      if (bgst != size)
	swap(&tab[bgst], &tab[size]);
      bgst = size - 1;
    }
  return (0);
}
