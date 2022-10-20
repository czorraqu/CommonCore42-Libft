/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:25:25 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/22 18:15:07 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*m;

	m = (char *)malloc(ft_strlen(s1) + 1);
	if (!m)
		return (NULL);
	ft_memcpy(m, s1, ft_strlen(s1));
	m[ft_strlen(s1)] = '\0';
	return (m);
}
