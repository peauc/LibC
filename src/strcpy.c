/*
** strcpy.c for strcpy in /home/peau_c/c
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Mon Sep 19 15:58:38 2016 
** Last update Mon Sep 19 16:17:39 2016 
*/

void	my_strcpy(char *destination, char *source)
{
  int	i;

  i = 0;
  while (source[i])
    {
      destination[i] = source[i];
      i++;
    }
}
