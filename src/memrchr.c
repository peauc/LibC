/*
** memrchr.c for memrchr in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Tue Sep 20 15:14:12 2016 
** Last update Wed Sep 21 15:59:39 2016 
*/

#include <stdlib.h>

void		*my_memrchr(const void *s, int c, size_t n)
{
  size_t	i;

  i = n;
  while (i > 0 && ((unsigned char *)s)[i] != c)
    {
      i++;
    }
  return ((void *)s + i);
}
