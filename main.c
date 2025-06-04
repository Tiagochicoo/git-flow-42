/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 09:22:10 by tpereira          #+#    #+#             */
/*   Updated: 2025/06/04 17:41:43 by tiago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	return (write(1, str, len));
}

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Error: Please provide one string argument\n");
		return (1);
	}
	ft_putstr(argv[1]);
	ft_putstr("\n");
	ft_putnbr(ft_strlen(argv[1]));
	ft_putstr("\n");
	return (0);
}
