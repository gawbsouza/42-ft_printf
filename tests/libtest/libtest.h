/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:28:31 by gasouza           #+#    #+#             */
/*   Updated: 2022/05/25 10:05:01 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTEST_H
# define LIBTEST_H

# include <stdio.h>
# include <string.h>

# define COLOR_OK "\e[1m\033[32m"
# define COLOR_KO "\e[1m\033[31m"
# define COLOR_TITLE "\e[1m\033[33m"
# define COLOR_END "\033[39m\e[0m"

void	test_start(const char *title);
void	test_str(const char *exp, const char *res);
void	test_int(int exp, int res);
void	test_end(void);
void	test_print_result(int num, int pass);
void	test_category(const char *s);

#endif
