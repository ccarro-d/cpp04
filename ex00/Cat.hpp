/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 18:04:00 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat& other);
		virtual ~Cat(); // Es virtual, lo indiquemos o no, porque eso se establece en la clase base

		Cat&	operator=(const Cat& other);

		virtual void	makeSound(void) const; // Es virtual, lo indiquemos o no, porque eso se establece en la clase base y luego solo tienen que coincidir las firmas de las funciones
};

#endif
