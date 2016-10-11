/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 17:11:52 by hehuang           #+#    #+#             */
/*   Updated: 2016/10/03 21:16:10 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_match(const char *big, const char *little, int l)
{
	int		k;
	int		match;

	k = 0;
	match = 1;
	while (little[k] != '\0')
	{
		if (big[l] != little[k])
		{
			match = 0;
			break ;
		}
		k++;
		l++;
	}
	return (match);
}

char		*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	l;
	int		match;

	i = 0;
	l = 0;
	match = 0;
	if (ft_strlen(little) == 0)
		return ((char*)big);
	while (i < ft_strlen(big) + 1)
	{
		if (big[i] == little[0])
		{
			l = i;
			match = get_match(big, little, l);
		}
		if (match)
			return ((char*)(big + l));
		i++;
	}
	return (NULL);
}
