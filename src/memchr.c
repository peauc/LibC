/*
** memchr.c for poc in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Tue Sep 20 14:54:34 2016 
** Last update Tue Sep 20 15:38:20 2016 
*/

#include <stdlib.h>

void	*memchr(const void *s, int c, size_t n)
{
  int	i;

  i = 0;
  while (i < n && (unsigned char)s + i != c)
    {
      i++;
    }
  return (s + i);
}
