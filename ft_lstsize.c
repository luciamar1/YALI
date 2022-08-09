#include "libft.h"

int ft_lstsize(t_list *lst)
{
    if(lst == NULL)
        return(0);
    int i;

    i = 1;
    while (lst->next != 0)
    {
        i ++;
        lst = lst->next;
    }
    return(i);
}