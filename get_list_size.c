/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:55:22 by hehuang           #+#    #+#             */
/*   Updated: 2018/11/28 14:55:24 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				get_list_size(t_list *list)
{
	int		count;

	count = 0;
	while (list && list->node)
	{
		++count;
		list->node = list->node->next;
	}
	list->node = list->head;
	return (count);
}
