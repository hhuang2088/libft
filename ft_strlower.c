/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 18:09:56 by hehuang           #+#    #+#             */
/*   Updated: 2016/10/17 10:12:29 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(char *str, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (str == NULL)
		return (NULL);
	ret = (char*)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		ret[i] = ft_tolower(str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
