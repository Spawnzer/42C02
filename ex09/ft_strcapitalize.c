/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:32:45 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/18 13:29:46 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}
	while (str[i])
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9') &&
			(str[i - 1] < 'a' || str[i - 1] > 'z') &&
			(str[i - 1] < 'A' || str[i - 1] > 'Z'))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
