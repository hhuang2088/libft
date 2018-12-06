/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_with_delimiter.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:01:33 by hehuang           #+#    #+#             */
/*   Updated: 2018/11/28 15:02:38 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_with_delimiter(char const *s1,
									char const *s2,
									char const *delim)
{
	char		*ret;
	char		*tmp;

	if (!(ret = ft_strjoin(s1, delim)))
		return (NULL);
	tmp = ret;
	if (!(ret = ft_strjoin(ret, s2)))
		return (NULL);
	free(tmp);
	return (ret);
}
