/*
** mylist.h for mylist.h in /usr/share/themes/Paper/gtk-3.0
** 
** Made by 
** Login   <xxx@epitech.eu>
** 
** Started on  Thu Dec 18 15:52:11 2014 
** Last update Thu Dec 18 15:53:34 2014 
*/

typedef struct s_list
{
  void		*data;
  struct s_list *next;
}		t_list;
