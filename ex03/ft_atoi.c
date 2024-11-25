/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:48:29 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/25 17:04:25 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= 9)
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
int main(void)
{
    char str1[] = "   -1234";
    char str2[] = "42";
    char str3[] = "   +5678";
    char str4[] = "abcd123";
    char str5[] = "123abcd";

    printf("Input: '%s', Output: %d\n", str1, ft_atoi(str1)); // Expected: -1234
    printf("Input: '%s', Output: %d\n", str2, ft_atoi(str2)); // Expected: 42
    printf("Input: '%s', Output: %d\n", str3, ft_atoi(str3)); // Expected: 5678
    printf("Input: '%s', Output: %d\n", str4, ft_atoi(str4)); // Expected: 0
    printf("Input: '%s', Output: %d\n", str5, ft_atoi(str5)); // Expected: 123

    return 0;
}*/
