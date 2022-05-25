/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:10:40 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include "limits.h"

int	main(void)
{
	test_start("ft_print_hex");
	test_category("Lower case");
	test_int(printf("%x", 0), ft_print_hex(0, LOWER));
	test_int(printf("%x", 10), ft_print_hex(10, LOWER));
	test_int(printf("%x", 42), ft_print_hex(42, LOWER));
	test_int(printf("%x", 100), ft_print_hex(100, LOWER));
	test_int(printf("%x", INT_MAX), ft_print_hex(INT_MAX, LOWER));
	test_int(printf("%x", -12), ft_print_hex(-12, LOWER));
	
	test_category("Upper case");
	test_int(printf("%X", 0), ft_print_hex(0, UPPER));
	test_int(printf("%X", 10), ft_print_hex(10, UPPER));
	test_int(printf("%X", 42), ft_print_hex(42, UPPER));
	test_int(printf("%X", 100), ft_print_hex(100, UPPER));
	test_int(printf("%X", INT_MAX), ft_print_hex(INT_MAX, UPPER));
	test_int(printf("%X", -12), ft_print_hex(-12, UPPER));
	test_end();
	return (0);
}
