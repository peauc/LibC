/*
** isdigit.c for isdigit in /home/pierre/LibC/src
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Sep 30 14:02:19 2016 pierre
** Last update Fri Sep 30 14:14:14 2016 pierre
*/

int isdigit(int c)
{
  return (c >= '0' && c <= '9');
}
