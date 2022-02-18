/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bteixeir <bteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:56:52 by bteixeir          #+#    #+#             */
/*   Updated: 2022/02/18 00:00:55 by bteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57)
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!((str[i -1] >= 48 && str[i -1] <= 57)
					|| (str[i -1] >= 'a' && str[i -1] <= 'z')
					|| (str[i -1] >= 'A' && str[i -1] <= 'Z')))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				i++;
				}	
			}
		}
		i++;
	}
	return (str);
}
