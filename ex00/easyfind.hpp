/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:24:38 by shkaruna          #+#    #+#             */
/*   Updated: 2025/11/22 12:38:17 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

template <typename T>
typename T::const_iterator 	easyfind(const T& container, int toFind)
{
	
	typename T::const_iterator it = std::find(*container.begin(), *container.end(), toFind);
	std::cout << "easy find is setup " << std::endl;
	std::cout << "Fist element: " << *container.begin() << std::endl;
	return it;
}

#endif