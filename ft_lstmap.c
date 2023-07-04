#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst || !f || !del)
        return NULL;
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
