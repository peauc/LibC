/*
** main.c for main in /home/pierre/LibC/unitTest
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Oct  7 14:24:55 2016 pierre
** Last update Fri Oct  7 17:15:58 2016 pierre
*/

#include "test.h"
#include <stdio.h>

/*
** This file must be use only for set and launch
** unit tests for libC library
*/

void	test_OK()
{
  g_test_total++;
  g_test_passed++;
  puts("[ OK ]");
}

void	test_KO()
{
  g_test_total++;
  puts("[ KO ]");
}

void	compile_stats()
{
  float	succes_percentage;

  succes_percentage = (float)(g_test_passed / g_test_total) * 100.0;
  printf("\n\n## Total tests : %d\n", g_test_total);
  printf("\n## Total passed : %f %%\n\n", succes_percentage);
  if (succes_percentage == 100.0)
    puts("You are the perfection !");
  else if (succes_percentage > 95.0)
    puts("Not bad bro ! Let's fix the last part");
  else
    puts("Please try to learn how to code and try once again !");
  puts("\n");
}

int	launchTests()
{
  if (test_stdio())
    return (1);
  if (test_string())
    return (1);
  if (test_ctype())
    return (1);
  return (0);
}

int	main()
{
  puts("Let's start the test !\n\n");
  g_test_passed = 0;
  g_test_total = 0;
  if (launchTests())
    return (puts(ERR), 1);
  compile_stats();
  return (0);
}
