/*
** ctype.c for  in /home/pierre/LibC/unitTest
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Oct  7 16:13:58 2016 pierre
** Last update Fri Oct  7 16:58:48 2016 pierre
*/

#include "test.h"

void	test_isalpha()
{
  puts("Basic isalpha :\n");
  isalpha('r') ? OK : KO;
  isalpha('T') ? OK : KO;
  isalpha('4') ? KO : OK;
  isalpha('2') ? KO : OK;
  puts("");
}

int	test_ctype()
{
  test_isalpha();
  return (0);
}
