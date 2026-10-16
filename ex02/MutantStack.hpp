/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:02 by afournie          #+#    #+#             */
/*   Updated: 2026/10/14 15:14:03 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

class	MutantStack
{
	public:
		MutantStack();
		MutantStack(MutantStack const &ref);
		MutantStack &operator=(MutantStack const &ref);
		~MutantStack();
};

#endif
