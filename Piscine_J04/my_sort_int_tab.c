/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Fri Oct 24 13:41:00 2014 xxx xxx
** Last update Tue Oct 28 14:36:44 2014 xxx xxx
*/

void	my_putnbstr(int *array, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      my_put_nbr(array[i]);
      ++i;
    }
  return;
}

void	my_sort_int_tab(int *tab, int size)
{
  int	temp;
  int	csize;

  csize = size;
  temp= 0;

  if  (tab[size - 2] > tab[size - 1])
    {
      temp = tab[size - 1];
      tab[size - 1] = tab[size - 2];
      tab[size - 2] = temp;
      my_sort_int_tab(tab, --size);      
    }
  if (size < csize)
    {
      my_sort_int_tab(tab, ++size);
    }
}

int	main()
{
  int	str[6] = {3, 10, 100, 8, 2, 1};
  
  my_putnbstr(str, 6);
  my_putchar('\n');
  my_sort_int_tab(str, 6);
  my_putnbstr(str, 6);
  my_putchar('\n');
}
