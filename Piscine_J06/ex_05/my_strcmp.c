/*
** my_strcmp.c for my_strcmp.c in /home/xxx/Things_Learn/Algorithms/Standford
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Dec 10 16:48:39 2014 
** Last update Tue Dec 16 00:33:07 2014 
*/

int		my_strcmp (const char *s1, const char *s2)
{
  while(*s1 == *s2)
    {
      if(*s1 == '\0')
	return 0;
      ++s1;
      ++s2;
    }
  return (*s1 - *s2);
}
