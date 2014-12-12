/*
** my_strcapitalize.c for my_strcapitalize.c in
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Dec 10 19:22:19 2014 
** Last update Fri Dec 12 01:39:23 2014 
*/

char		*my_strcapitalize(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (i != 0)
	{
	  if ((str[i] >= 'a' && str[i] <= 'z')
	      && (str[i - 1] < 48 || (str[i -1] > 57 && str[i - 1] < 'A')
		  || (str[i - 1] > 90 && str[i - 1] < 97) || str[i] > 122))
	    str[i] -= 32;
	}
      else if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
      ++i;
    }
  return (str);
}
