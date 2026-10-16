/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:09:01 by afournie          #+#    #+#             */
/*   Updated: 2026/10/14 15:09:02 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

easyfind::easyfind()
{

}

easyfind::easyfind(easyfind const &ref)
{
	*this = ref;
}

easyfind	&easyfind::operator=(easyfind const &ref)
{
	return (*this);
}

easyfind::~easyfind()
{

}
