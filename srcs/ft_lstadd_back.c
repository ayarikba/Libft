#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *iter;

    if (!(*lst))
    {
        *lst = new;
        new->next = NULL;
    }
    else
    {
        iter = *lst;
        while (iter->next != NULL)
            iter = iter->next;
        iter->next = new;
        new->next = NULL;
    }
    return ;
}