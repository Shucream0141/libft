/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:12:23 by sendo             #+#    #+#             */
/*   Updated: 2023/06/27 15:22:40 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memo;

	if (count == 0)
		;
	else if ((size * count) / count != size)
		return (NULL);
	memo = malloc(count * size);
	if (!memo)
		return (NULL);
	ft_bzero(memo, count * size);
	return (memo);
}

// int	main(void)
// {
// 	int *ptr, *p;
// 	int i;
// 	//callocではヒープメモリという静的領域やスタック領域とは別の容量を確保している。使用後はfree関数で確保したメモリを解放しなければならない。
// 	/* 500個のintサイズのメモリを確保 */
// 	ptr = (int *)calloc(0, 1);
// 	if (ptr == NULL)
// 	{
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	p = ptr;
// 	for (i = 0; i < 500; i++)
// 	{
// 		printf("%d", *p);
// 		p++;
// 	}
// 	/* メモリの開放 */
// 	free(ptr);
// 	//callocではヒープメモリという静的領域やスタック領域とは別の容量を確保している。使用後はfree関数で確保したメモリを解放しなければならない。
// 	/* 500個のintサイズのメモリを確保 */
// 	printf("\n");
// 	ptr = (int *)ft_calloc(0,1);
// 	if (ptr == NULL)
// 	{
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr;
// 	for (i = 0; i < 500; i++)
// 	{
// 		printf("%d", *p);
// 		p++;
// 	}
// 	// 	/* メモリの開放 */
// 	free(ptr);
// 	return (0);
// }