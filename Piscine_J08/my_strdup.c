/*
** main.c for pj8 in /home/xxx/Test/my_ls
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Fri Oct 31 17:45:29 2014 xxx xxx
** Last update Fri Oct 31 18:47:16 2014 xxx xxx
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*copy;
  int	length;
  int	i;
  
  i = 0;
  length = my_strlen(src);
  if ((copy = malloc(length)) == NULL)
    return(0);
  while (i < length)
    {
      copy[i] = src[i];
      ++i;
    }
  return (copy);
}
