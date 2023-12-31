/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:04:46 by sendo             #+#    #+#             */
/*   Updated: 2023/06/27 16:59:51 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	over(long *num, const char *str, int count)
{
	if (count == 0 && ((*num > LONG_MAX / 10) || (*num == LONG_MAX / 10 && *str
				- '0' > LONG_MAX % 10)))
	{
		*num = LONG_MAX;
		return (1);
	}
	else if (count == 1 && ((*num > LONG_MIN / 10 * -1) || (*num == LONG_MIN
				/ 10 * -1 && *str - '0' > LONG_MIN % 10 * -1)))
	{
		*num = LONG_MIN;
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		count;
	long	num;

	num = 0;
	count = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (over(&num, str, count))
			return (num);
		num = num * 10 + *str - '0';
		str++;
	}
	if (count == 1)
		num *= -1;
	else if (count > 1)
		num = 0;
	return (num);
}

// int	main(void)
// {
// 	int a;
// 	printf("longmax intcast %d\n", (int)(LONG_MAX));
// 	printf("longmin intcast %d\n", (int)(LONG_MIN));

// 	a = atoi("-9223372036854775807");
// 	printf("\n");
// 	printf("lib:%d\n", a);
// 	a = ft_atoi("-9223372036854775807");
// 	printf("ft :%d\n", a);
// 	return (0);
// 	// 27,-1
// 	// 28,0
// 	// 29,-1
// 	// 30,-1
// 	// 36,-1
// 	// 37,-1
// }