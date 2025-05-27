/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bavi </var/spool/mail/Bavi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:58:38 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/24 22:43:41 by Bavi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "1234567";

    printf("Before: %s\n", str);
    ft_bzero(str, 2);
    printf("After:  [%d][%d]%s\n", str[0], str[1], &str[2]);

    return 0;
}*/
