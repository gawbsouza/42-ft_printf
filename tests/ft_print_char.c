/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 09:57:50 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"

int	main(void)
{
	test_start("ft_print_char");
	test_int(printf("%c", 'o'), ft_print_char('o'));
	test_int(printf("%c", '\0'), ft_print_char('\0'));
	test_int(printf("%c", 0), ft_print_char(0));
	test_end();
	return (0);
}
