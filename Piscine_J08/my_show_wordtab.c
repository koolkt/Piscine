/*
** my_show_wordtab.c for my_lib in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj8
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Wed Nov  5 21:14:12 2014 
** Last update Wed Nov  5 21:15:53 2014 
*/

int	my_show_wordtab(int argc, char **argv)
{
  int	i;
  char **new;

  i = 0;
  new =  my_str_to_wordtab(argv[1]);
  while (new[i])
    {
      my_putstr(new[i]);
      my_putchar('\n');
      ++i;
    }
  free(new);
  return (0);
}
