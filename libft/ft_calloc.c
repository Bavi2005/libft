/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:52:55 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:10:20 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char			*a;
	unsigned int	tot;
	size_t			i;

	tot = size * nitems;
	a = malloc(size * nitems);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (tot > 0)
	{
		a[i] = 0;
		i++;
		tot--;
	}
	return ((void *)a);
}
