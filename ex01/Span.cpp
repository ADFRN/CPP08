/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:07 by afournie          #+#    #+#             */
/*   Updated: 2026/10/21 11:35:59 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0) {}

Span::Span(unsigned int n) : _max(n) { _data.reserve(n); }

Span::Span(const Span& other) { *this = other; }

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_max = other._max;
		_data = other._data;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int nb)
{
	if (this->_max >= this->_data.size())
		throw OutOfRange();
	else
		this->_data.push_back(nb);
}

const char* Span::OutOfRange::what() const throw() { return "Span is full"; }
