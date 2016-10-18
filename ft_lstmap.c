/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 22:06:43 by hehuang           #+#    #+#             */
/*   Updated: 2016/10/17 10:09:03 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (lst == NULL || f == NULL)
		return (NULL);
	ret = (t_list*)malloc(sizeof(t_list));
	if (ret == NULL)
		return (NULL);
	ret = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (lst->next != NULL)
		ret->next = ft_lstmap(lst->next, f);
	return (ret);
}
