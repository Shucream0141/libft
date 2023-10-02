/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shucream <shucream@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:41 by sendo             #+#    #+#             */
/*   Updated: 2023/08/22 18:34:06 by shucream         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%zu\n", strlen(NULL));
// 	printf("%zu\n", ft_strlen(NULL));
// 	return (0);
// }