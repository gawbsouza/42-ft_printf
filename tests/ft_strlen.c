/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 09:59:58 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include <string.h>

int	main(void)
{
	char	*str1 = "";
	char	*str2 = "\0";
	char	*str3 = " ok \t";
	char	*str4 = "ok ";
	char	*str5 = " ok";

	test_start("ft_strlen");
	test_int(strlen(str1), ft_strlen(str1));
	test_int(strlen(str2), ft_strlen(str2));
	test_int(strlen(str3), ft_strlen(str3));
	test_int(strlen(str4), ft_strlen(str4));
	test_int(strlen(str5), ft_strlen(str5));
	test_end();
	return (0);
}
