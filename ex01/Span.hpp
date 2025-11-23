/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:26:59 by shkaruna          #+#    #+#             */
/*   Updated: 2025/11/23 16:46:44 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <cstddef>
#include <bits/stdc++.h>

class Span
{
	private:
		unsigned int maxSize;
		std::vector<int> vec;
		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int newNum);
		unsigned int	getSize() const;
		unsigned int 	size() const;
		void	shortestSpan();
		//int	longestSpan();
		// int& operator[](unsigned int index);
		// const int& operator[](unsigned int index) const;
		
};
#endif