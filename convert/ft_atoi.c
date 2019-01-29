/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 11:54:40 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:09 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				operator;
	unsigned long	val;

	val = 0;
	operator = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			operator = -1;
		str++;
	}
	while (ft_isdigit(*str))
		val = val * 10 + (*str++ - '0');
	if (val > 9223372036854775807 && operator > 0)
		return (-1);
	if (val + 1 > 9223372036854775807 && operator < 0)
		return (0);
	return (val * operator);
}
