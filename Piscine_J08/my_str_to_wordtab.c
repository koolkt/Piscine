/*
** my_str_to_wordtab.c for my_lib in /home/xxx/Test/piscine/pj8
** 
** Made by xxx xxx
** Login   <flores_a@epitech.eu>
** 
** Started on  Tue Nov  4 17:18:19 2014 xxx xxx
** Last update Mon Nov 10 16:56:20 2014 
*/

#include <stdlib.h>

int	count_words(char *str)
{
  int	i;
  int	w;

  i = 0;
  w = 0;
  while (str[i])
    {
      if (str[i]!= '\0' && ((str[i] >= '0' && str[i] <= '9' ||
	   str[i] >= 'a' && str[i] <= 'z' ||
	   str[i] >= 'A' && str[i] <= 'Z') &&
	  (str[i - 1] < '0' || str[i - 1] > '9') &&
	  (str[i - 1] < 'a' || str[i - 1] > 'z') &&
	  (str[i - 1] < 'A' || str[i - 1] > 'Z')))
	++w;
      ++i;
    }
  return (w);
}

int	count_char(char *str)
{
  int	c;
  int	i;
  
  c = 0;
  i = 0;
  while (str[i])
    {
      if (((str[i] >= '0' && str[i] <= '9' ||
	     str[i] >= 'a' && str[i] <= 'z' ||
	     str[i] >= 'A' && str[i] <= 'Z')) && str[i])
	{
	  c += 1;
	  if (str[i] != '\0')
	    i += 1;
	}
      else if (str[i] != '\0')
	i += 1;
    }
  return (c);
}

void	add_words(char *str, char *words)
{
  int	c;
  int	i;
  
  c = 0;
  i = 0;
  while (str[i])
    {
      if (((str[i] >= '0' && str[i] <= '9' ||
	     str[i] >= 'a' && str[i] <= 'z' ||
	     str[i] >= 'A' && str[i] <= 'Z')) && str[i])
	{
	  words [c] = str[i];
	  c += 1;
	  if((str[i + 1] < '0' || str[i + 1] > '9') &&
	     (str[i + 1] < 'a' || str[i + 1] > 'z') &&
	     (str[i + 1] < 'A' || str[i + 1] > 'Z') || str[i + 1] == '\0')
	    {
	      words[c] = '\0';
	      ++c;
	    }
	  if (str[i] != '\0')
	    i += 1;
	}
      else if (str[i] != '\0')
	i += 1;
    }
  return;
}

void	add_tab(char *words, char **tab, int nw)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  tab[0] = words;
  while (j < nw && nw > 0)
    {
      while (words[i])
	{
	  ++i;
	}
      ++j;
      ++i;
      tab[j] = &(words[i]);
    }
  tab[j] = NULL;
}

char	**my_str_to_wordtab(char *str)
{
  int	cwords;
  int	length;
  char	*words;
  char **wordtab;

  cwords = count_words(str);
  if ((wordtab = malloc((cwords + 1) *
  			sizeof(char*))) == NULL)
    return (0);
  length = count_char(str) + cwords;
  if ((words = malloc(length * sizeof(char))) == NULL)
    return (0);
  add_words(str, words);
  add_tab(words, wordtab, cwords);
  return (wordtab);
}
