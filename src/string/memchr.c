/*
** memchr.c for poc in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Tue Sep 20 14:54:34 2016 
** Last update Wed Sep 21 16:00:32 2016 
*/

#include <stdlib.h>

void		*my_memchr(const void *s, int c, size_t n)
{
  size_t	i;

  i = 0;
  while (i < n && *(unsigned char *)s + i != (unsigned char)c)
    {
      i++;
    }
  return ((void *)s + i);
}
