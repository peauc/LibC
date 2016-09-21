/*
** strdup.c for strdup in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Wed Sep 21 11:59:30 2016 
** Last update Wed Sep 21 15:22:17 2016 
*/

#include <stdlib.h>
#include "pocLib.h"

char	*my_strdup(char *str)
{
  char	*newstr;
  int	i;

  i = -1;
  if ((newstr = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (NULL);
  while (str[++i])
    (newstr[i] = str[i]);
  newstr[i] = 0;
  return (newstr);
}
