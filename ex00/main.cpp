/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:09:04 by afournie          #+#    #+#             */
/*   Updated: 2026/10/16 15:44:41 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++) v.push_back(i * 10);

	try {
		std::vector<int>::iterator it = easyfind(v, 20);
		std::cout << "Trouvé : " << *it << std::endl;
		easyfind(v, 99); // doit lancer une exception
	}
	catch (std::exception &e) {
		std::cout << "Erreur : " << e.what() << std::endl;
	}
}
