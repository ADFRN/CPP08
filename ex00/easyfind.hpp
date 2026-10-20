/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:08:57 by afournie          #+#    #+#             */
/*   Updated: 2026/10/16 15:46:35 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
}

#endif
