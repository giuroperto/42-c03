/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:32:10 by goka-rop          #+#    #+#             */
/*   Updated: 2019/10/22 23:32:30 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_size(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizedestfinal;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	i = 0;
	sizedest = ft_size(dest);
	sizesrc = ft_size(src);
	j = sizedest;
	while (i < size)
	{
		dest[size] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	sizedestfinal = ft_size(dest);
	return (sizedestfinal);
}
