/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 09:56:11 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"

int	main(void)
{
	char	*ptr1 = 0;
	char	*ptr2 = NULL;
	char	*ptr3 = "ok";

	test_start("ft_print_ptr");
	test_int(printf("%p", ptr1), ft_print_ptr(ptr1));
	test_int(printf("%p", ptr2), ft_print_ptr(ptr2));
	test_int(printf("%p", ptr3), ft_print_ptr(ptr3));
	test_end();
	return (0);
}
