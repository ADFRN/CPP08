/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:07 by afournie          #+#    #+#             */
/*   Updated: 2026/10/21 14:11:02 by afournie         ###   ########.fr       */
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
	if (this->_data.size() >= this->_max)
		throw OutOfRange();
	else
		this->_data.push_back(nb);
}

unsigned int Span::longestSpan() const
{
	if (_data.size() < 2)
		throw NotEnoughNumbers();
	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());
	return (static_cast<unsigned int>(max) - static_cast<unsigned int>(min));
}

unsigned int Span::shortestSpan() const
{
	if (_data.size() < 2)
		throw NotEnoughNumbers();
	std::vector<int> sorted(_data);
	std::sort(sorted.begin(), sorted.end());
	unsigned int best = static_cast<int>(sorted[1]) - static_cast<int>(sorted[0]);
	for (int i = 2; i < static_cast<int>(sorted.size()); i++)
	{
		unsigned int diff = static_cast<unsigned int>(sorted[i]) - static_cast<unsigned int>(sorted[i - 1]);
		if (diff < best)
		best = diff;
	}
	return best;
}

const char* Span::OutOfRange::what() const throw() { return "Span is full"; }
const char* Span::NotEnoughNumbers::what() const throw() { return "Not enough numbers"; }
