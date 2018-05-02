/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tduverge <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/17 18:51:12 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/17 18:51:12 by tduverge    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!(s1 && s2))
		return (0);
	if (ft_strncmp(s1, s2, n))
		return (0);
	return (1);
}
