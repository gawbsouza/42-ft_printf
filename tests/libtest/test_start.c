/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:46:32 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:05:11 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtest.h"

void	test_start(const char *title)
{
	printf("\xE2\x9C\xA8 %s%s%s\n\n", COLOR_TITLE, title, COLOR_END);
}
