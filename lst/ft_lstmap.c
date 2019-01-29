/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 19:47:54 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:14:38 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_back;

	new = f(lst);
	new_back = new;
	if (new == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		new_back->next = f(lst);
		if (new_back->next == NULL)
			return (NULL);
		new_back = new_back->next;
	}
	return (new);
}
