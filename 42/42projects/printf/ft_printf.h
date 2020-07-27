/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuse <hmatsuse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:35:25 by hmatsuse          #+#    #+#             */
/*   Updated: 2020/07/27 20:22:19 by hmatsuse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

typedef struct	s_flag
{
	int		zero_or_space;
	int		minus;
	int		plus;
	// int		bash;
	// int		space;
	int		width;
	int		dot;
	// int		dot_val;
	char	character;
	// int		printlen;
	// int		slen;
}				t_flag;

#endif
