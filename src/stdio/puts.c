/*
** puts.c for puts in /home/pierre/LibC/src
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Sep 30 13:41:43 2016 pierre
** Last update Fri Oct  7 14:38:34 2016 pierre
*/

#include <stdio.h>

int	puts(const char *s)
{
  if (fprintf(stdout, "%s\n", s) < 0)
    return (EOF);
  else
    return (0);
}
