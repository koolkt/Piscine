/*
** my_strstr.c for my_strstr.c in /home/xxx/Things_Learn/Algorithms/Standford
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Dec 10 13:37:43 2014 
** Last update Wed Dec 10 14:40:21 2014 
*/

#define		NULL (void*) 0

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

char		*my_strstr(char *str, char *to_find)
{
  char		*p;
  int		i;
  int		len_str;
  int		len_to_find;
  int		j;

  i = 0;
  j = 0;
  if(str != NULL && to_find != NULL &&
     (len_str = my_strlen(str)) >= (len_to_find = my_strlen(to_find)))
    while (str[i] && to_find[j] && len_str - i >= len_to_find - j)
      {
	if (to_find[j] == str[i])
	  {
	    if (!j)
	      p = &(str[i]);
	    j++;
	  }
	else
	  j = 0;
       i++;
      }
  if (j != len_to_find)
    p = NULL;
  return (p);
}

int		main(void)
{
  char		*str;
  
  str = my_strstr("hello world", "world");

  if (str != NULL)
    while (*str)
      {
	write(1, str++, 1);
      }
  return (0);
}
