/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:20:28 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/20 19:55:40 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && *s && f)
	{
		f(s);
		s++;
		ft_striter(s, f);
	}
}