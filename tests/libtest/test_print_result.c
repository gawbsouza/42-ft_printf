/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print_result.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:54:10 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 11:21:01 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_print_result(int num, int pass)
{
	if (pass)
		printf("\r %02d.%s%s%s ", num, COLOR_OK, "[\xE2\x9C\x94]", COLOR_END);
	else
		printf("\r %02d.%s%s%s ", num, COLOR_KO, "[\xE2\x9C\x96]", COLOR_END);
}
