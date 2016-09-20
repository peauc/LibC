/*
** memrchr.c for memrchr in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Tue Sep 20 15:14:12 2016 
** Last update Tue Sep 20 15:46:45 2016 
*/

#include <stdlib.h>

void	*memrchr(const void *s, int c, size_t n)
{
  int	i;

  i = n;
  while (i > 0 && s + i != c)
    {
      i++;
    }
  return (s + i);
}
