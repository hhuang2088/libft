/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:27:46 by hehuang           #+#    #+#             */
/*   Updated: 2016/10/07 22:31:59 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (n < 1)
		return (0);
	while (ptr1[i] == ptr2[i] && i <= n)
		i++;
		if ((ptr1[i] == '\0' && ptr2[i]) || i == n)
			return (0);
	return (ptr1[i] - ptr2[i]);
}
