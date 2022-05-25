/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 09:55:58 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "\0";
	char	*str3 = NULL;
	char	*str4 = " ok \t";
	char	*str5 = "ok ";
	char	*str6 = " ok";

	test_start("ft_print_str");
	test_int(printf("%s", str1), ft_print_str(str1));
	test_int(printf("%s", str2), ft_print_str(str2));
	test_int(printf("%s", str3), ft_print_str(str3));
	test_int(printf("%s", str4), ft_print_str(str4));
	test_int(printf("%s", str5), ft_print_str(str5));
	test_int(printf("%s", str6), ft_print_str(str6));
	test_end();
	return (0);
}
