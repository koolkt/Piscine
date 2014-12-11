/*
** get_color.c for my_lib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 21:23:28 2014 
** Last update Tue Nov 11 17:03:08 2014 xxx xxx
*/

void		my_put_nbr(int);
int		swap_endian_color(int);

int		get_color(char red, char green, char blue)
{
  int		color;

  color = 255;
  color = color << 8;  
  color += red;
  color = color << 8;
  color += green;
  color = color << 8;
  color += blue;
  return (color);
}

int		main(void)
{
  int	color;
  color = get_color(10, 10, 10);
  my_put_nbr(color);
  color = swap_endian_color(color);
  my_putchar('\n');
  my_put_nbr(color);
}
