/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 00:41:13 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:14:18 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main() 
{
    const char *haystack = "This is a simple test string.";
    const char *needle = "i";
    size_t len = 25;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Found '%s' in the string at position: %ld\n"
	, needle, result - haystack);
    } else {
        printf("'%s' not found in the first %zu characters of '%s'\n"
	, needle, len, haystack);
    }

    return 0;
}*/
