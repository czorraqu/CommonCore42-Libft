/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:53:37 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/29 13:22:07 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !f)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i] && i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	f(unsigned int i, char c)
{
	char	str;
	int		i;
	i = 0;
	str = c + 1;
	return (str);
}

int	main(void)
{
	char	s[] = "al pan pan y al vino vino";

	printf("%s\n", ft_strmapi(s, f));
	retrun (0);
}
*/
