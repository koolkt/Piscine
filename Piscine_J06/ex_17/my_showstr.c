/*
** my_showstr.c for my_showstr.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Sat Dec 13 05:28:19 2014 
** Last update Sat Dec 13 19:28:35 2014 
*/

void		put_hex(char c)
{
  int		i;
  char		str[64];
  char		*hex;

  hex = "0123456789abcdef";
  i = 0;
  while (c)
    {
      str[i] = hex[c % 16];
      c = c / 16;
      ++i;
    }
  if (i < 2)
    write(1, "0", 1);
  while (i--)
    {
      write(1, &str[i], 1);
    }
  return ;
}

int		my_showstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] == 127)
	{
	  write(1, "\\", 1);
	  put_hex(str[i]);
	}
      else
	write(1, &str[i], 1);
      ++i;
    }
}
