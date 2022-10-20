/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:51:35 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/20 16:36:17 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	s[] = "mamarracha";

	printf("%s\n", ft_memset(s, '$', 4));
	printf("%s", memset(s, '$', 4));
	return (0);
}*/
