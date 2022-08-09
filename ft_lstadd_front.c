#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *lista)
{
    if(!lista || !lst)
        return((void)NULL);
    if(lst != NULL)
        lista -> next = *lst;
    *lst = lista;
}