#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list *current;
  t_list *next;

  if (lst == NULL || del == NULL)
    return ;
  current = *lst;
  while (current != NULL)
  {
    next = current->next;
    ft_isdelone(current, del);
    current = next;
  }
  *lst = NULL;
}