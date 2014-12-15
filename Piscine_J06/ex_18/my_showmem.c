/*
** my_showmem.c for my_showmem.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Last update Sun Dec 14 01:43:55 2014 
*/

#include	<stdint.h>

void		put_hex(intptr_t c, char first, char x)
{
  int		j;
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
  j = 8 - i;
  if (!first || first % 16 == 0)
    while (--j)
      {
  	write(1, "0", 1);
      }
  while (i--)
    {
      write(1, &str[i], 1);
    }
  if (!first || first % 16 == 0)
    {
      write(1, ": ", 2);
      put_hex(x, 17, 0);
    }
  return ;
}

void		putpad(char *str, int size, int *p)
{
  int		i;

  i = 0;
  while (i < 16 && *p < size)
    {
      write(1, &str[*p], 1);
      ++i;
      *p += 1;
    }
  write(1, "\n", 1);
  return ;
}

void		putfinal(char *str, int size, int *j, int p)
{
  int		pad2;
  int		pad1;

  pad1 = (size - p);
  pad2 = ((size - p) / 2) - 1;
  while (--pad1)
    write(1, " ", 1);
  while (str[p])
    {
      write(1, &str[p], 1);
      ++p;
    }
  while (--pad2)
    write(1, " ", 1);
  write(1, "\n", 1);
  *j = size;
}

int		my_showmem(char *str, int size)
{
  int		p;
  int		j;

  p = 0;
  j = 0;
  size--;
  while (j < size)
    {
      if (j == 0)
	{
	  put_hex((intptr_t)&str[j], j, str[j]);
	  //put_hex(str[j], 2, 0);
	}
      if (j % 16 == 0 && j)
	{
	  putpad(str, size, &p);
	  //printf("str[%i] (%c) : %p\n", j, str[j], &str[j]);
	  put_hex((intptr_t)&str[j], j, str[j]);
	  //put_hex(str[j], 2, 0);
	}
      else if (j)
      	put_hex(str[j], j, 0);
      if (j % 2)
	write(1, " ", 1);
      if ((size % 16) && j + 1 >= size)
      	putfinal(str, size, &j, p);
      ++j;
    }
  return (0);
}

int		main(void)
{
  my_showmem("abcde..........", 15);
  return (0);
}
