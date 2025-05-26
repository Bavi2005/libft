/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bavi </var/spool/mail/Bavi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:27:25 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/24 23:47:14 by Bavi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char   *pointdest;
        unsigned char   *pointsrc;

        if (!dest && !src)
                return (NULL);
        pointdest = (unsigned char *)dest;
        pointsrc = (unsigned char *)src;
	if (pointdest < pointsrc)
	{
		while (n--)
			*pointdest++ = *pointsrc++;
	}
	else
	{
		pointdest += n;
		pointsrc += n;
		while (n--)
			*(--pointdest) = *(--pointsrc);
	}
        return (dest);
}

int main(void)
{
    char str[20] = "Hello, World!";

    // Test overlapping copy
    ft_memmove(str + 7, str, 6);
    printf("Result: %s\n", str);

    return 0;
}
