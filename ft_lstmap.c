#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *dup;
    t_list *iter;
    void *content;

    content = NULL;
    while (lst)
    {
        content = f(lst->content);
        iter = ft_lstnew(content);
        ft_lstadd_back(&dup, iter);
        lst = lst->next;
        content = NULL;
        iter = NULL;
    }
    ft_lstclear(&lst, del);
    return (dup);
}

void *f(void *x)
{
    return (x);
}

void del(void *x)
{
    return ;
}


int main()
{
    t_list *x = malloc(sizeof(t_list));
    t_list *y = malloc(sizeof(t_list));
    t_list *z = malloc(sizeof(t_list));

    x->content = "abc";
    y->content = "def";
    z->content = "ghi";

    x->next = y;
    y->next = z;
    z-> next = NULL;

    t_list *m = ft_lstmap(x, f, del);
    while (m)
    {
        printf("%s", m->content);
        m = m->next;
    }
        while (x)
    {
        printf("%s", x->content);
        x = x->next;
    }
    
}