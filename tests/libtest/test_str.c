/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:47:15 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:05:20 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_str(const char *exp, const char *res)
{
	static int num;

	if (num == 0)
		num = 1;
	int pass = ((exp == NULL && res == NULL) || (strcmp(res, exp) == 0));
	test_print_result(num, pass);
	printf(" %s | %s \n", exp, res);
	num++;
}
