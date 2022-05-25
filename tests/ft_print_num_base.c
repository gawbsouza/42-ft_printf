/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:11:20 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include <limits.h>

int	main(void)
{

	long long int 			int_min = LLONG_MIN;
	long long int 			int_max = LLONG_MAX;
	unsigned long long int	umax = ULLONG_MAX;
	char					*str = "";
	
	test_start("ft_print_num_base");
	
	test_category("Decimal Unsigned");
	test_int(printf(str), ft_print_num_base(0, 0, str));
	test_int(printf("%u",0), ft_print_num_base(0, 0, BASE_DEC));
	test_int(printf("%u",7), ft_print_num_base(7, 0, BASE_DEC));
	test_int(printf("%u",10), ft_print_num_base(10, 0, BASE_DEC));
	test_int(printf("%u",42), ft_print_num_base(42, 0, BASE_DEC));
	test_int(printf("%u",100), ft_print_num_base(100, 0, BASE_DEC));
	test_int(printf("%llu",umax), ft_print_num_base(umax, 0, BASE_DEC));
	test_int(printf("%llu",umax + 1), ft_print_num_base(umax + 1, 0, BASE_DEC));
	
	test_category("Decimal Signed");
	test_int(printf("%d",0), ft_print_num_base(0, 1, BASE_DEC));
	test_int(printf("%d",-7), ft_print_num_base(-7, 1, BASE_DEC));
	test_int(printf("%d",-10), ft_print_num_base(-10, 1, BASE_DEC));
	test_int(printf("%d",-42), ft_print_num_base(-42, 1, BASE_DEC));
	test_int(printf("%d",-100), ft_print_num_base(-100, 1, BASE_DEC));
	test_int(printf("%lld",int_max), ft_print_num_base(int_max, 1, BASE_DEC));
	test_int(printf("%lld",int_max + 1), ft_print_num_base(int_max + 1, 1, BASE_DEC));
	test_int(printf("%lld",int_min), ft_print_num_base(int_min, 1, BASE_DEC));
	test_int(printf("%lld",int_min - 1), ft_print_num_base(int_min - 1, 1, BASE_DEC));

	test_category("Hexadecimal");
	test_int(printf("0"), ft_print_num_base(0, 0, BASE_HEX_UPP));
	test_int(printf("7"), ft_print_num_base(7, 0, BASE_HEX_UPP));
	test_int(printf("A"), ft_print_num_base(10, 0, BASE_HEX_UPP));
	test_int(printf("2A"), ft_print_num_base(42, 0, BASE_HEX_UPP));
	test_int(printf("64"), ft_print_num_base(100, 0, BASE_HEX_UPP));
	test_int(printf("FFFFFFFFFFFFFFFF"), ft_print_num_base(umax, 0, BASE_HEX_UPP));

	test_end();
	return (0);
}
