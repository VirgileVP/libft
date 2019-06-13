/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 14:50:45 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:19:33 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static t_gnl	*ft_initialize(int fd)
{
	t_gnl			*new;

	if (!(new = (t_gnl*)MALLOC(sizeof(*new))))
		return (NULL);
	new->next = NULL;
	new->actual = NULL;
	new->temp = ft_strnew(0);
	new->current_fd = fd;
	return (new);
}

static t_gnl	*ft_fdchek_newlink(t_gnl *full, int fd)
{
	t_gnl			*tmp;
	t_gnl			*cpy_full;

	tmp = NULL;
	cpy_full = full;
	while (cpy_full)
	{
		if (cpy_full->current_fd == fd)
			return (cpy_full);
		if (!(cpy_full->next))
		{
			tmp = ft_initialize(fd);
			while (cpy_full->next)
				cpy_full = cpy_full->next;
			cpy_full->next = tmp;
			return (tmp);
		}
		cpy_full = cpy_full->next;
	}
	return (NULL);
}

static int		ft_last_check(char *act_line, char **line)
{
	char			*last_c;

	if (!act_line)
		return (0);
	last_c = ft_strchr(act_line, '\n');
	if (last_c)
	{
		*last_c = '\0';
		*line = ft_strdup(act_line);
		ft_strncpy(act_line, &last_c[1], ft_strlen(&last_c[1]) + 1);
		return (1);
	}
	else if (ft_strlen(act_line) > 0)
	{
		*line = ft_strdup(act_line);
		*act_line = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*full = NULL;
	t_gnl			*list;
	char			buffer[BUFF_SIZE + 1];
	int				reading;

	if (fd <= -1 || BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!(full))
		full = ft_initialize(fd);
	list = ft_fdchek_newlink(full, fd);
	while (!(ft_strchr(list->temp, '\n')))
	{
		reading = read(fd, buffer, BUFF_SIZE);
		if (reading == 0)
			return (ft_last_check(list->actual, line));
		if (reading == -1)
			return (-1);
		buffer[reading] = '\0';
		list->actual = ft_strjoin(list->temp, buffer);
		FREE(list->temp);
		list->temp = list->actual;
	}
	return (ft_last_check(list->actual, line));
}
