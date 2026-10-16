/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:13:59 by afournie          #+#    #+#             */
/*   Updated: 2026/10/14 15:14:00 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack()
{

}

MutantStack::MutantStack(MutantStack const &ref)
{
	*this = ref;
}

MutantStack	&MutantStack::operator=(MutantStack const &ref)
{
	return (*this);
}

MutantStack::~MutantStack()
{

}
