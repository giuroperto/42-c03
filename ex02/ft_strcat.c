/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:17:20 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/22 23:30:14 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	int		size1;
	int		size2;

	j = 0;
	size1 = ft_size(dest);
	size2 = ft_size(src);
	i = size1;
	while (j < size2)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
