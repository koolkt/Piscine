/*
** mystrcp.c for mylib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 15:26:12 2014 
** Last update Mon Nov 10 16:59:00 2014 
*/

#include <stdlib.h>

char	*my_strcp(char *str)
{
  char *copy;
  int	i;

  if ((copy = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  copy[i] = '\0';
  while (i--)
    {
      copy[i] = str[i];
    }
  return (copy);
}
