/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/20 16:43:28 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const std::string& type);
		Dog(const Dog& other);
		virtual ~Dog(); // Es virtual, lo indiquemos o no, porque eso se establece en la clase base

		Dog&	operator=(const Dog& other);

		virtual void	makeSound(void) const; // Es virtual, lo indiquemos o no, porque eso se establece en la clase base y luego solo tienen que coincidir las firmas de las funciones
};

#endif
