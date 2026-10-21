/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:04 by afournie          #+#    #+#             */
/*   Updated: 2026/10/21 11:27:24 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class	Span
{
	private:
		std::vector<int>	_data;
		unsigned int		_max;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int nb);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		class OutOfRange : public std::exception
		{
			public:
			virtual const char* what() const throw();
		};
};

#endif
