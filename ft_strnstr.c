/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:58:27 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/21 18:07:46 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (!*n || n[0] == '\0')
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && n[j] && h[i + j] != '\0' && j < len - i)
		{
			if (n[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
	}	
	return (0);
}

/*int	main(void)
{
	char	haystack[] = "MZIRIBMZIRIBMZE123";
	char	needle[] = "MZIRIBMZE";
	
	printf("mi ft: |%s|\n", ft_strnstr(haystack, needle, 9));
	printf("original: |%s|\n", strnstr(haystack, needle, 9));
	
	return (0);	
}*/
