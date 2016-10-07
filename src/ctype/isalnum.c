/*
** isalnum.c for isalnum in /home/pierre/LibC/src
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Sep 30 14:14:25 2016 pierre
** Last update Fri Oct  7 14:06:57 2016 pierre
*/

#include "pocLib.h"

int isalnum(int c)
{
  return (isalpha(c) || isdigit(c));
}
