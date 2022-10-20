/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:44:07 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/21 12:39:12 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (ds < sr)
	{
		ft_memcpy(dst, src, len);
	}
	else if (ds > sr)
	{
		while (len > 0)
		{
			ds[len - 1] = sr[len - 1];
			len--;
		}
	}
	return (dst);
}
