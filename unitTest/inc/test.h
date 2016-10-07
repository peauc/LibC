/*
** test.h for header in /home/pierre/LibC/unitTest
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Oct  7 14:30:30 2016 pierre
** Last update Fri Oct  7 17:04:23 2016 pierre
*/

#ifndef TEST_H_
# define TEST_H_

# include "../../inc/pocLib.h"

# define ERR "Something went wrong during execution,\
 go fix your code dumb monkey !"

int test_string();
int test_stdio();
int test_ctype();

void test_OK();
void test_KO();

int g_test_passed;
int g_test_total;

# define OK test_OK()
# define KO test_KO()

#endif /* !TEST_H_ */
