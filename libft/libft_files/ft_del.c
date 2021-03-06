/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_del.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tduverge <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/17 18:54:53 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/17 18:54:58 by tduverge    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_del(void *content, size_t content_size)
{
	content_size = 0;
	free(content);
}
