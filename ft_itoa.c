/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czorraqu <czorraqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:52:12 by czorraqu          #+#    #+#             */
/*   Updated: 2022/10/07 13:51:55 by czorraqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int			count;
	long int	m;

	count = 0;
	m = (long int)n;
	if (n == 0)
		return (1);
	if (m < 0)
	{
		count = 1;
		m *= -1;
	}
	while (m > 0)
	{
		count++;
		m /= 10;
	}
	return (count);
}

static char	*ft_fillstr(char *str, int n)
{
	long int	m;
	int			i;

	m = (long int)n;
	if (n == 0)
		str[0] = '0';
	if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	i = ft_intlen(n) - 1;
	while (m > 0)
	{
		str[i] = (m % 10) + '0';
		i--;
		m /= 10;
	}
	str[ft_intlen(n)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	return (ft_fillstr(str, n));
}
// int	main(void)
// {
// 	int	a;

// 	a = 22555965;
// 	printf("%s\n", ft_itoa(a));
// 	return (0);
// }
