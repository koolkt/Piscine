/*
** my_showmem.c for my_showmem.c in /home/xxx/Piscine-Collection/Piscine/Piscine_J06/ex_15
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Last update Sun Dec 14 00:44:05 2014 
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
      //put_hex(x, 17, 0);
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
  return ;
}

int		my_showmem(char *str, int size)
{
  int		sizet;
  int		p;
  int		j;
  int		i;

  sizet = size;
  p = 0;
  j = 0;
  i = 0;
  while (size--)
    {
      if (i == 0)
	{
	  put_hex((intptr_t)&str[j], j, str[j]);
	  put_hex(str[j], 2, 0);
	}
      if (i == 16)
	{
	  i = 0;
	  putpad(str, sizet, &p);
	  //if (j > 16)
	    //put_hex(str[j], 1, 0);
	  write(1, "\n", 1);
	  //printf("str[%i] (%c) : %p\n", j, str[j], &str[j]);
	  put_hex((intptr_t)&str[j], j, str[j]);
	  put_hex(str[j], 2, 0);
	}
      else if (i /* && i != 16 */)
      	put_hex(str[j], j, 0);
      /* if (i % 2 == 0 && j > 14) */
      /* 	write(1, " ", 1); */
      /* else  */if ((j) % 2 /* && j < 14 && j */)
	write(1, " ", 1);
      ++i;
      ++j;
    }
  write(1, "\n", 1);
  return (0);
}

int		main(void)
{
  my_showmem("hey guys show mem is cool you can do some pretty neat stuff", 61);
  return (0);
}
