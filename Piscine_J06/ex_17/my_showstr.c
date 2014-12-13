/*
** my_showstr.c for my_showstr.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Sat Dec 13 05:28:19 2014 
** Last update Sat Dec 13 19:19:10 2014 
*/

void		put_hex(char c)
{
  int		i;
  char		str[64];
  char		hex[] = {[0] = '0', [1] = '1', [2] = '2',
			[3] = '3', [4] = '4', [5] = '5',
			[4] = '4', [5] = '5', [6] = '6',
			[7] = '7', [8] = '8', [9] = '9',
			[10] = 'a', [11] = 'b', [12] = 'c',
			[13] = 'd', [14] = 'e', [15] = 'f'};
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
