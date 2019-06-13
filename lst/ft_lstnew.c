/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 18:36:28 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:14:42 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	if (!(new_list = malloc(sizeof(*new_list))) ||
			!(new_list->content = malloc(content_size)))
		return (NULL);
	if (content)
	{
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
		new_list->next = NULL;
	}
	else
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	return (new_list);
}
