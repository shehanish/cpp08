/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:24:44 by shkaruna          #+#    #+#             */
/*   Updated: 2025/11/21 13:10:05 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define MAX_VALUE 50

int		main(int, char **)
{
	EasyFind<int> array(MAX_VALUE);
	int a = 20;
	srand(time(NULL));
	for(int i = 0; i < MAX_VALUE; i++)
	{
		const int value = rand();
		array[i] = value;		
	}
	try
	{
		easyfind(array, a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
	
	
}