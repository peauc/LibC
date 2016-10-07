/*
** pocLib.h for pocLib in /home/peau_c/c/inc
**
** Made by
** Login   <peau_c@epitech.net>
**
** Started on  Wed Sep 21 15:04:29 2016
** Last update Fri Sep 30 14:23:19 2016 pierre
*/

#ifndef _POCLIB_
# define _POCLIB_

# include <stdlib.h>

void		*my_memchr(const void *, int, size_t);
void		*my_memrchr(const void *, int, size_t);
void		*my_rawmemchr(const void *, unsigned char);
void		my_strcpy(char *, char *);
int		    my_strlen(char *);
char		*my_strdup(char *);

int		    isalpha(int c);
int		    isdigit(int c);
int		    isalnum(int c);

#endif
