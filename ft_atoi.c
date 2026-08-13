/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:32:04 by beyatala          #+#    #+#             */
/*   Updated: 2026/08/07 12:34:16 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int sign;
	int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
        i++;
    }
	if (str[i] == '-')
	{
		sign *= -1 i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
