/*
** putchar.c for putchar in /home/pierre/LibC
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Oct  7 14:11:19 2016 pierre
** Last update Fri Oct  7 14:18:22 2016 pierre
*/

#include <unistd.h>
#include <stdio.h>

int	putchar(int c)
{
  if (write(STDOUT_FILENO, &c, 1) == -1)
    return (EOF);
  else
    return (c);
}
