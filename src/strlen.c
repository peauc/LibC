/*
** strlen.c for toto in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Wed Sep 21 15:22:27 2016 
** Last update Wed Sep 21 15:24:01 2016 
*/

int	my_strlen(char *str)
{
 int	i;

 i = 0;
 while (str[i])
   i++;
 return (i);
}
