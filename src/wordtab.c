/*
** wordtab.c for wortab in /home/peau_c/c/src
** 
** Made by 
** Login   <peau_c@epitech.net>
** 
** Started on  Thu Sep 22 10:01:11 2016 
** Last update Wed Sep 28 15:47:05 2016 
*/

#include <stdlib.h>

static int	count_target(char *str, unsigned char target)
{
  int		i;

  i = 0;
  while (*str)
    {
      if (*str == target)
	i++;
      str++;
    }
  return (i);
}

int	count_word(char *str, unsigned char target)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != target)
    i++;
  return (i);
}

void	myStrcpyToTarget(char *src, char* dest, unsigned char target)
{
  int	i;

  i = 0;
  while (src[i] && src[i] != target)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = 0;
}

char	**wordtab(char *str, unsigned char target)
{
  int	i;
  char	**tab;
  int	j;

  j = 0;
  i = 0;
  if ((tab = malloc(sizeof(void *) * (count_target(str, target) + 1))) == NULL)
    return (NULL);
  printf("%s\n", str);
  while (str[i])
    {
      if (str[i] == target || i == 0)
      {
	if ((tab[j] = malloc(sizeof(char) * (count_word(str + i, target) + 1))) == NULL)
	  return (NULL);
	printf("count_word %d\n", count_word(str + i, target));
	printf("str + i |%s|\n", str + i);
	printf("tab[j] |%p|\n", tab[j]);
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	myStrcpyToTarget(str + i, tab[j], target);
	j++;
      }
      i++;
    }
  tab[j] = 0;
  return (tab);
}
