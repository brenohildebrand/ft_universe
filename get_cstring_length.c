/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cstring_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:48:53 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/06 14:53:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_universe.h"

unsigned int	get_cstring_length(char *cstring)
{
	unsigned int	length;

	length = 0;
	while (cstring[length])
		length++;
	return (length);
}