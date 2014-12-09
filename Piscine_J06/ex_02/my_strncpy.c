/*
** my_strncpy.c for my_strncpy.c in /home/xxx/Test/Piscine_J06/ex_01
** 
** Made by Adolfo Flores
** Login   <flores_a@epitech.eu>
** 
** Started on  Tue Dec  9 14:10:20 2014 
** Last update Tue Dec  9 14:22:21 2014 
*/

char		*my_strncpy(char *dest, char *src, size_t n)
{
  size_t	i;

  i = 0;
  while (i < n && src[i])
    {
      dest[i] = src[i];
      i++;
    }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return (dest);
}
