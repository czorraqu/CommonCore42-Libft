/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:36:39 by czorraqu          #+#    #+#             */
/*   Updated: 2022/10/04 19:48:49 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end]))
		end--;
	str = ft_substr((char *)s1, start, end - (start -1));
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "            ";
	char	set[] = " ";

	printf("|%s|\n", ft_strtrim(s1, set));
	return (0);
}*/
