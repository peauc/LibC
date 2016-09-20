/*
** rawmemchr.c for rawmemchr in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Tue Sep 20 15:19:05 2016 
** Last update Tue Sep 20 17:02:07 2016 
*/

#include <stdlib.h>
void *rawmemchr	(const void *s, unsigned char c)
{
    while (*((unsigned char *)s) != c)
          s++;
      return ((void *)s);
}
