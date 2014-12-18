/*
** pf_array.c for pf_array.c in /home/xxx/Rendu/Piscine_C_J11/do-op
** 
** Made by xxx xxx
** Login   <flores_a@epitech.net>
** 
** Started on  Tue Oct 21 11:01:02 2014 xxx xxx
** Last update Tue Oct 21 22:34:23 2014 xxx xxx
*/

#include "../include/my.h"

int	evaluateArray(char opcode, int num1, int num2)
{
  fnptr	operation;
  fnptr operations[128] = {0};

  operations['+'] = my_add;
  operations['-'] = my_sub;
  operations['/'] = my_div;
  operations['*'] = my_mul;
  operations['%'] = my_mod;
  operation = operations[opcode];
  return operation(num1, num2);
}
