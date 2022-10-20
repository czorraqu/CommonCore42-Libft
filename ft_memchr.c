/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:40:30 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/21 13:33:14 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)s;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return (&st[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (NULL);
	else
		return (NULL);
}
