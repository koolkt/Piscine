/*
** my_strcpy.c for my_strcpy in /home/xxx/Test/Piscine_J06/ex_01
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Tue Dec  9 13:42:36 2014 
** Last update Tue Dec  9 14:05:17 2014 
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] && dest[i])
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
