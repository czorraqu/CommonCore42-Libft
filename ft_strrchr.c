/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:38:09 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/19 20:20:49 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = ft_strlen(s) - 1;
	a = (char *)s;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&a[i]);
		i--;
	}
	if ((unsigned char)c == '\0')
		return (&a[ft_strlen(s)]);
	else
		return (NULL);
}
