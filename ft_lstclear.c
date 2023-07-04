#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!(*lst) || !del)
        return ;
    t_list *iter;
    t_list *new;

    iter = *lst;
    new = *lst;
    while (iter != NULL)
    {
        iter = iter->next;
        ft_lstdelone(new, del);
        new = iter;
    }
}
