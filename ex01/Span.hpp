/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:04 by afournie          #+#    #+#             */
/*   Updated: 2026/10/14 15:14:05 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class	Span
{
	public:
		Span();
		Span(Span const &ref);
		Span &operator=(Span const &ref);
		~Span();
};

#endif
