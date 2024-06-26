/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <ecarvalh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:53:20 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/04/10 14:52:58 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mempcpy(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest);
}
