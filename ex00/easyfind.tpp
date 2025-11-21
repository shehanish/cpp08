/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:25:11 by shkaruna          #+#    #+#             */
/*   Updated: 2025/11/21 12:52:42 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"


template <typename T>
EasyFind<T>::EasyFind():data(NULL), size(0){}

template <typename T>
EasyFind<T>::EasyFind(unsigned int n):data(new T(n)), size(n){}

template<typename T>
EasyFind<T>::EasyFind(EasyFind const &other){*this = other;}

template<typename T>
EasyFind<T>&  EasyFind<T>::operator=(EasyFind const &other)
{
	if(*this != other)
	{
		if(data)
			delete[] data;
		
		size = other.size;
		
		if(size > 0)
		{
			data = new T(size);
			for(unsigned int i = 0; i < size; i++)
			{
				data[i] = other.data[i];
			}
		}
		else
		{
			data = NULL;
		}
		
	}
	return *this;
}

template<typename T>
EasyFind<T>::~EasyFind()
{
	if(data)
		delete[];
}

template<typename T>
T&	EasyFind<T>::easyfind(T& a, int b)
{
	
		auto value = find(a.begin(), a.end(), b);
		if(value != a.end())
			std::cout << "Fist occurence at: " << distance(a.begin(), value) << std::endl;
		else
			throw std::out_of_range("Out of Bound");
	
}
template<typename T>
T& EasyFind<T>::operator[](unsigned int index)
{
	if(index >= size)
		throw std::out_of_range("Out of bound");
	return data(index);	
}

template<typename T>
T const & EasyFind<T>::operator[](unsigned int index) const
{
	if(index >= size)
		throw std::out_of_range("Out of bound");
	return data(index);	
}

#endif