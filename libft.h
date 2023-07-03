#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;

int ft_isalpha(int c);
int ft_isdigit(int c);
void *ft_memset(void *s, int x, size_t n);
size_t ft_strlen (const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *ptr, unsigned int s, size_t n);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
void ft_putstr_fd(char *x, int fd);
t_list *ft_lstnew(void *content);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstadd_back(t_list **lst, t_list *new);
















#endif