/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:47:13 by sendo             #+#    #+#             */
/*   Updated: 2023/06/27 19:24:31 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	ch = (char)c;
	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (ch == '\0')
		return ("");
	while (i--)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
	}
	return (NULL);
}

//s[3]は、s[0],s[1],s[2],s[3]の4バイトをとっている。strlenをすると、3となる。
//ここでは、s[i] != '\0'ではなく,i--がよいだろう
// int main()
// {
//     const char *str = "Hello, world!";
//     int ch = '\0';

//     char *ft_result = ft_strrchr(str, ch);
//     char *std_result = strrchr(str, ch);

//     printf("[%s]\n", ft_result);
//     printf("[%s]\n", std_result);
// }