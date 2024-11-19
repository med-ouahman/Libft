/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:39:56 by mouahman          #+#    #+#             */
/*   Updated: 2024/10/25 10:08:07 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	preflen;
	size_t	sufflen;
	char	*joined;

	i = 0;
	preflen = ft_strlen(s1);
	sufflen = ft_strlen(s2);
	joined = malloc((preflen + sufflen) * sizeof(char) + 1);
	if (!joined)
		return (NULL);
	while (i < preflen)
	{
		joined[i] = s1[i];
		i++;
	}
	while (i < preflen + sufflen)
	{
		joined[i] = s2[i - preflen];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
