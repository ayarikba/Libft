#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;


int ft_toupper(int c);
int ft_tolower(int c);
char *ft_substr(char const *ptr, unsigned int s, size_t n);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strrchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t n);
int ft_strncmp(const char* s1, const char* s2, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t ft_strlen (const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlcat(char  *dst, const char    *src, size_t    n);
char *ft_strjoin(char const *s1, char const *s2);
void ft_striteri(char *x, void (*f)(unsigned int, char*));
char *ft_strdup(const char *s);
char *ft_strchr(const char *s, int c);
char **ft_split(char const *s, char c);
void ft_putstr_fd(char *x, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *x, int fd);
void ft_putchar_fd(char c, int fd);
void *ft_memset(void *x, int y, size_t z);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void    *dest, const void  *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(void *s, int c, size_t n);
int ft_lstsize(t_list *lst);
t_list *ft_lstnew(void *content);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
 void ft_lstiter(t_list *lst, void(*f)(void *));
t_list *ft_lstlast(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
char *ft_itoa(int n);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
void *ft_calloc(size_t memb, size_t size);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *nptr);
char *ft_strnstr(const char *big, const char *little, size_t n);













#endif