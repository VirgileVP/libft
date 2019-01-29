/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 22:47:31 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:28:19 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_word(char *s, char c)
{
	size_t		len;

	if (!s)
		return (0);
	len = 0;
	while (*s && *s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	nb_words;
	size_t	word_counter;
	size_t	word_len;
	size_t	next_word;

	next_word = 0;
	nb_words = ft_count_words((char *)s, c);
	if (!s || !c || !(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	word_counter = 0;
	while (word_counter < nb_words)
	{
		if (s[next_word] != c)
		{
			word_len = ft_len_word((char *)(s + next_word), c);
			tab[word_counter] = ft_strsub(s + next_word, 0, word_len);
			word_counter++;
			next_word += word_len;
		}
		next_word++;
	}
	tab[nb_words] = NULL;
	return (tab);
}
