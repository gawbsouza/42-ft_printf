/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_base_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:04:24 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include <limits.h>

int	main(void)
{

	long long int int_min = LLONG_MIN;
	long long int int_max = LLONG_MAX;
	unsigned long long int	umax = ULLONG_MAX;
	
	test_start("ft_num_base_str");
	
	test_category("Decimal Unsigned");
	test_str(NULL, ft_num_base_str(0, UNSIGNED_INT, ""));
	test_str("0", ft_num_base_str(0, UNSIGNED_INT, BASE_DEC));
	test_str("7", ft_num_base_str(7, UNSIGNED_INT, BASE_DEC));
	test_str("10", ft_num_base_str(10, UNSIGNED_INT, BASE_DEC));
	test_str("42", ft_num_base_str(42, UNSIGNED_INT, BASE_DEC));
	test_str("100", ft_num_base_str(100, UNSIGNED_INT, BASE_DEC));
	test_str("18446744073709551615", ft_num_base_str(umax, UNSIGNED_INT, BASE_DEC));
	test_str("0", ft_num_base_str(umax + 1, UNSIGNED_INT, BASE_DEC));
	
	test_category("Decimal Signed");
	test_str("0", ft_num_base_str(0, SIGNED_INT, BASE_DEC));
	test_str("-7", ft_num_base_str(-7, SIGNED_INT, BASE_DEC));
	test_str("-10", ft_num_base_str(-10, SIGNED_INT, BASE_DEC));
	test_str("-42", ft_num_base_str(-42, SIGNED_INT, BASE_DEC));
	test_str("-100", ft_num_base_str(-100, SIGNED_INT, BASE_DEC));
	test_str("9223372036854775807", ft_num_base_str(int_max, SIGNED_INT, BASE_DEC));
	test_str("-9223372036854775808", ft_num_base_str(int_max + 1, SIGNED_INT, BASE_DEC));
	test_str("-9223372036854775808", ft_num_base_str(int_min, SIGNED_INT, BASE_DEC));
	test_str("9223372036854775807", ft_num_base_str(int_min - 1, SIGNED_INT, BASE_DEC));
	
	test_category("Hexadecimal");
	test_str("0", ft_num_base_str(0, UNSIGNED_INT, BASE_HEX_UPP));
	test_str("7", ft_num_base_str(7, UNSIGNED_INT, BASE_HEX_UPP));
	test_str("A", ft_num_base_str(10, UNSIGNED_INT, BASE_HEX_UPP));
	test_str("2A", ft_num_base_str(42, UNSIGNED_INT, BASE_HEX_UPP));
	test_str("64", ft_num_base_str(100, UNSIGNED_INT, BASE_HEX_UPP));
	test_str("FFFFFFFFFFFFFFFF", ft_num_base_str(umax, UNSIGNED_INT, BASE_HEX_UPP));
	
	test_end();
	return (0);
}
