/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:08:19 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include "limits.h"

int	main(void)
{
	test_start("ft_print_nbr");
	test_category("Signed");
	test_int(printf("%d",0), ft_print_nbr(0, SIGNED_INT));
	test_int(printf("%d",-1), ft_print_nbr(-1, SIGNED_INT));
	test_int(printf("%d",-10), ft_print_nbr(-10, SIGNED_INT));
	test_int(printf("%d",-42), ft_print_nbr(-42, SIGNED_INT));
	test_int(printf("%d",INT_MIN), ft_print_nbr(INT_MIN, SIGNED_INT));
	test_int(printf("%d",1), ft_print_nbr(1, SIGNED_INT));
	test_int(printf("%d",10), ft_print_nbr(10, SIGNED_INT));
	test_int(printf("%d",42), ft_print_nbr(42, SIGNED_INT));
	test_int(printf("%d",INT_MAX), ft_print_nbr(INT_MAX, SIGNED_INT));
	
	test_category("Unsigned");
	test_int(printf("%u",1), ft_print_nbr(1, UNSIGNED_INT));
	test_int(printf("%u",10), ft_print_nbr(10, UNSIGNED_INT));
	test_int(printf("%u",42), ft_print_nbr(42, UNSIGNED_INT));
	test_int(printf("%u",INT_MAX), ft_print_nbr(INT_MAX, UNSIGNED_INT));
	test_int(printf("%u",UINT_MAX), ft_print_nbr(UINT_MAX, UNSIGNED_INT));
	test_end();
	return (0);
}
