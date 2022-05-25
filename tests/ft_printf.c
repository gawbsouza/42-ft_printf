/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:12:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:26:55 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "libtest/libtest.h"
#include "limits.h"

int	main(void)
{
	char	*blank_str1 = "";
	char	*blank_str2 = "\0";
	char	*null_str = NULL;
	char	*blank_ptr = 0;
	
	test_start("ft_printf");
	test_category("General");
	test_int(printf("ok"), ft_printf("ok"));
	test_int(printf(" ok"), ft_printf(" ok"));
	test_int(printf("ok "), ft_printf("ok "));
	test_int(printf(" ok "), ft_printf(" ok "));
	test_int(printf(blank_str1), ft_printf(blank_str1));
	test_int(printf(blank_str2), ft_printf(blank_str2));
	test_int(printf(null_str), ft_printf(null_str));
	
	test_category("%%");
	test_int(printf(" %% %% "), ft_printf(" %% %% "));
	test_int(printf(" %%"), ft_printf(" %%"));
	test_int(printf("%% "), ft_printf("%% "));
	test_int(printf("%%"), ft_printf("%%"));
	test_int(printf(" %% "), ft_printf(" %% "));
	
	test_category("%c");
	test_int(printf(" %c %c %c ", '0', 0, '\0'), ft_printf(" %c %c %c ", '0', 0, '\0'));
	test_int(printf(" %c %c %c ", 0, '0', '\0'), ft_printf(" %c %c %c ", 0, '0', '\0'));
	test_int(printf(" %c %c %c ", 0, 0, 0), ft_printf(" %c %c %c ", 0, 0, 0));
	
	test_category("%d");
	test_int(printf("%d",0), ft_printf("%d",0));
	test_int(printf("%d",-1), ft_printf("%d",-1));
	test_int(printf("%d",-10), ft_printf("%d",-10));
	test_int(printf("%d",-42), ft_printf("%d",-42));
	test_int(printf("%d",INT_MIN), ft_printf("%d",INT_MIN));
	test_int(printf("%d",1), ft_printf("%d",1));
	test_int(printf("%d",10),  ft_printf("%d",10));
	test_int(printf("%d",42), ft_printf("%d",42));
	test_int(printf("%d",INT_MAX), ft_printf("%d",INT_MAX));
	
	test_category("%i");
	test_int(printf("%i",0), ft_printf("%i",0));
	test_int(printf("%i",-1), ft_printf("%i",-1));
	test_int(printf("%i",-10), ft_printf("%i",-10));
	test_int(printf("%i",-42), ft_printf("%i",-42));
	test_int(printf("%i",INT_MIN), ft_printf("%i",INT_MIN));
	test_int(printf("%i",1), ft_printf("%i",1));
	test_int(printf("%i",10),  ft_printf("%i",10));
	test_int(printf("%i",42), ft_printf("%i",42));
	test_int(printf("%i",INT_MAX), ft_printf("%i",INT_MAX));

	test_category("%u");
	test_int(printf("%u",1), ft_printf("%u",1));
	test_int(printf("%u",10), ft_printf("%u",10));
	test_int(printf("%u",42), ft_printf("%u",42));
	test_int(printf("%u",INT_MAX), ft_printf("%u",INT_MAX));
	test_int(printf("%u",UINT_MAX), ft_printf("%u",UINT_MAX));
	test_int(printf("%u",-12), ft_printf("%u",-12));
	
	test_category("%s");
	test_int(printf("%s", blank_str1), ft_printf("%s", blank_str1));
	test_int(printf("%s", blank_str2), ft_printf("%s", blank_str2));
	test_int(printf("%s", null_str), ft_printf("%s", null_str));
	test_int(printf(" %s ", "ok"), ft_printf(" %s ", "ok"));
	test_int(printf(" %s", "ok"), ft_printf(" %s", "ok"));
	test_int(printf("%s ", "ok"), ft_printf("%s ", "ok"));
	test_int(printf("%s", "ok"), ft_printf("%s", "ok"));
	
	test_category("x");
	test_int(printf("%x", 0), ft_printf("%x", 0));
	test_int(printf("%x", 10), ft_printf("%x", 10));
	test_int(printf("%x", 42), ft_printf("%x", 42));
	test_int(printf("%x", 100), ft_printf("%x", 100));
	test_int(printf("%x", INT_MAX), ft_printf("%x", INT_MAX));
	test_int(printf("%x", -12), ft_printf("%x", -12));
	
	test_category("X");
	test_int(printf("%X", 0), ft_printf("%X", 0));
	test_int(printf("%X", 10), ft_printf("%X", 10));
	test_int(printf("%X", 42), ft_printf("%X", 42));
	test_int(printf("%X", 100), ft_printf("%X", 100));
	test_int(printf("%X", INT_MAX), ft_printf("%X", INT_MAX));
	test_int(printf("%X", -12), ft_printf("%X", -12));

	test_category("p");
	test_int(printf("%p", blank_ptr), ft_print_ptr(blank_ptr));
	test_int(printf("%p", null_str), ft_print_ptr(null_str));
	test_int(printf("%p", blank_str1), ft_print_ptr(blank_str1));

	test_end();
	return (0);
}
