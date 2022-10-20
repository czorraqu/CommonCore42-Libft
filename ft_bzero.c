/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:37:04 by czorraqu          #+#    #+#             */
/*   Updated: 2022/09/20 16:59:09 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "maca";
	char	t[] = "maca";

	ft_bzero(s, 2);
	printf("%d\n", s[3]);
	bzero(t, 2);
	printf("%d", t[3]);
	return (0);
}*/
