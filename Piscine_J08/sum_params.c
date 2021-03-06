/*
** summ_params.c for pj8 in /home/xxx/Test/piscine/pj8
** 
** Made by xxx xxx
** Login   <flores_a@epitech.eu>
** 
** Started on  Tue Nov  4 14:05:49 2014 xxx xxx
** Last update Wed Nov  5 13:32:48 2014 xxx xxx
*/

#include <stdlib.h>

void	recursive(char **argv, char *sump)
{
  int	z;
  int	i;

  z = 0;
  i = 0;
  if (argv[0])
    {
      while (argv[0][i])
	{
	  sump[z] = argv[0][i];
	  ++i;
	  ++z;
	}
      if (argv[1] != '\0')
	sump[z] = '\n';
      if (argv[1] == '\0')
	sump[z + 1] = '\0';
      ++z;
      recursive(argv + 1,sump + z);
    }
  return;
}

char *sum_params(int argc, char **argv)
{
  int	length;
  char	*sump;
  int	i;

  length = 0;
  i = 0;
  while (argv[i])
    {
      length += my_strlen(argv[i]);
      ++i;
    }
  if ((sump = malloc(sizeof(char) * (length + (argc - 1) + 1))) == NULL)
    return(NULL);
  recursive(argv, sump);
  return (sump);
}
