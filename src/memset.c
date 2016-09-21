/*
** memset.c for bzero in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Wed Sep 21 15:24:28 2016 
** Last update Wed Sep 21 15:34:13 2016 
*/

#include <stdlib.h>

void		my_memset(void *ptr, unsigned char value, size_t length)
{
  size_t	i;

  i = 0;
  while (i < length)
    {
      ((unsigned char *)ptr)[i] = value;
      i++;
    }
}

