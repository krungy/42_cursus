#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *node;
  t_list  *new;

  node = NULL;
  if (lst == NULL || f == NULL || del == NULL)
    return ;
  while (lst)
  {
    new = ft_lstnew(f(lst->content));
    if (!new)
    {
      ft_lstclear(&node, del);
      return (NULL);
    }
    ft_lstadd_back(&node, new);
    lst = lst->next;
  }

  return (node);
}