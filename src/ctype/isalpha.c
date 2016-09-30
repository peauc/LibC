/*
** isalpha.c for isalpha in /home/pierre/LibC/src
**
** Made by pierre
** Login   <pierre@epitech.net>
**
** Started on  Fri Sep 30 14:00:05 2016 pierre
** Last update Fri Sep 30 14:01:58 2016 pierre
*/

int isalpha(int c)
{
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
