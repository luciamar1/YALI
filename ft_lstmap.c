#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
    t_list *new;
    t_list *x;

    new = NULL;
    while (lst)
    {
        x = ft_lstnew(f(lst -> content));
        if(!x)
        {
            ft_lstclear(&lst, del);
            return(NULL);
        }
        ft_lstadd_back(&new, x);
        lst = lst->next;
    }
        return(new);
}