#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
 
int ft_isalpha(int c);
int ft_isdigit(int c);
void *ft_memset(void *s, int x, size_t n);
size_t ft_strlen (const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *ptr, unsigned int s, size_t n);
char *ft_strtrim(char const *s1, char const *set);
















#endif