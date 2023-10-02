/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:37:57 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:29:57 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(len1 + len2 + 1);
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		s3[len1 + i] = s2[i];
		i++;
	}
	s3[len1 + len2 + 1] = '\0';
	return (s3);
}

// int	main(void)
// {
// 	char const *s1 = "12345";
// 	char const *s2 = "12345";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// 	return (0);
// }