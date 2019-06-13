/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 19:53:16 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:14:22 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current_list;
	t_list	*next_list;

	current_list = *alst;
	while (current_list)
	{
		next_list = current_list->next;
		del((current_list->content), (current_list->content_size));
		FREE(current_list);
		current_list = next_list;
	}
	*alst = NULL;
}
