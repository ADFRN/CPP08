/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:07 by afournie          #+#    #+#             */
/*   Updated: 2026/10/14 15:14:08 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{

}

Span::Span(Span const &ref)
{
	*this = ref;
}

Span	&Span::operator=(Span const &ref)
{
	return (*this);
}

Span::~Span()
{

}
