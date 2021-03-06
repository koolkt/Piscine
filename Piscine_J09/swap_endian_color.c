/*
** swap_endian_color.c for  in /run/media/xxx/2337a639-4d85-4f36-ade6-cdcedffd0cf2/xxx/Test/piscine/pj9
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Mon Nov 10 22:09:50 2014 
** Last update Mon Nov 10 23:12:07 2014 
*/

#include	"union.h"

int		swap_endian_color(int color)
{
  union u_rgb	uc;

  uc.rgb[0] = 0;
  uc.rgb[1] = 0;
  uc.rgb[2] = 0;
  uc.rgb[3] = 0;
  uc.rgb[3] += color & 0xFF;
  color = color >> 8;
  uc.rgb[2] += color & 0xFF;
  color = color >> 8;
  uc.rgb[1] += color & 0xFF;
  color = color >> 8;
  uc.rgb[0] = color & 0xff;
  return(uc.color);
}
