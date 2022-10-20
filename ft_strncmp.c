/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:26:55 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/23 12:47:15 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}

/*int	main(void)
{
	char	s1[] = "Giralda";
	char	s2[] = "Giraldaa";

	printf("%d", ft_strncmp(s1, s2, 5));
	printf("\n%d", strncmp(s1, s2, 5));
	return (0);
}*/
