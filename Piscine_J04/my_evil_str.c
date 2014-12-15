/*
** my_evil_str.c for my_evil_str.c in /home/xxx/Test/my_lib
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Thu Oct 23 15:24:45 2014 xxx xxx
** Last update Thu Oct 23 16:29:59 2014 xxx xxx
*/

char	*my_evil_str(char *str)
{
  int	i;
  int	length;
  char	temp;

  length = my_strlen(str) - 1;
  i = 0;
  while (str[i] != str[length] && i != length + 1)
    {
      temp = str[i];
      str[i] = str[length];
      str[length] = temp;
      ++i;
      --length;
    }
  return (str);
}
