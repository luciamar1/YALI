#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *lista;
    t_list *aux;

    if (!lst || !*lst || !del)
        return ;
    lista = *lst;
    while(lista)
    {
        aux = lista -> next;
        ft_lstdelone(lista, del);
        lista = aux;
    }
    *lst = NULL;
}