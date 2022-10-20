/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:29:06 by czorraqu          #+#    #+#             */
/*   Updated: 2022/10/03 19:20:32 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	stringlen;
	char	*sub;

	if (!s)
		return (NULL);
	stringlen = ft_strlen(s);
	if (stringlen < start)
		return (ft_strdup(""));
	if (start + len > stringlen)
		len = stringlen - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	if (start < stringlen)
		ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	s[] = "hola";

	printf("|%s|\n", ft_substr(s, 0, 18446744));
	return (0);
}
*/
