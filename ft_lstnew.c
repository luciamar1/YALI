#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *lista;

    lista = (void *)malloc(sizeof(t_list));
    if(lista == NULL)
        return(lista);
    lista->content = content;
    lista->next = NULL;
    return(lista);
}