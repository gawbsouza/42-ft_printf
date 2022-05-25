/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:47:15 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 11:20:52 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_int(int exp, int res)
{
	static int num;
	
	if (num == 0)
		num = 1;
	test_print_result(num, (exp == res));
	printf(" %d | %d                               \n", exp, res);
	num++;
}
