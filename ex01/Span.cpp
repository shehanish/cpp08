/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:26:52 by shkaruna          #+#    #+#             */
/*   Updated: 2025/11/23 19:01:51 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0){};

Span::Span(unsigned int N) : maxSize(N) {};

Span::Span(const Span& other) : maxSize(other.maxSize), vec(other.vec)
{
	
}


Span& Span::operator=(const Span& other)
{
	if(this != &other)
	{
		maxSize = other.maxSize;
        vec = other.vec;
	}
	return *this;
}
Span::~Span(){};

// int& Span::operator[](unsigned int index)
// {
// 	if(index >= maxSize)
// 		throw std::out_of_range("Out of range");
// 	return(vec[index]);
		
// }

// const int& Span::operator[](unsigned int index) const
// {
// 	if(index >= maxSize)
// 		throw std::out_of_range("Out of range");
// 	return(vec[index]);
		
// }

unsigned int	Span::getSize() const
{
	return maxSize;
}

unsigned int Span::size() const
{
	return vec.size();	
}

void Span::addNumber(int newNum)
{
	if (vec.size() >= maxSize)
	{
		throw std::overflow_error("Span is full - cannot add more numbers");
	}
	vec.push_back(newNum);
}

void	Span::shortestSpan()
{
	std::vector<int> newVec = std::sort(vec.begin(), vec.end());
	// std::vector<int>::iterator minNum = std::min_element(vec.begin(), vec.end());
	// std::cout << "min_element: " << *minNum << std::endl;
	
	// //std::vector<int>::iterator newVec = vec.erase(vec.begin(), minNum);
	// std::vector<int>::iterator minPos = std::find(vec.begin(), vec.end(), *minNum);
	// if(minPos != vec.end())
	// {
	// 	std::vector<int>::difference_type index = std::distance(vec.begin(), minPos);
	// 	std::cout << "min pos: " << *minPos << " is at : " << index <<std::endl;
	// }

	// std::vector<int>::iterator newVec = vec.erase(vec.begin(), minPos);
	// for(unsigned int i = 0; i < vec.size(); i++)
	// {
	// 	std::cout << "New vector: " << newVec[i] << std::endl;
	// }
}