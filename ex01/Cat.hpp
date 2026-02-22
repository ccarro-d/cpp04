/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:57:17 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 19:55:53 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain	*brain_;

	public:
		Cat(void);
		Cat(const Cat& other);
		virtual ~Cat(); // Es virtual, lo indiquemos o no, porque eso se establece en la clase base

		Cat&	operator=(const Cat& other);

		virtual void	makeSound(void) const; // Es virtual, lo indiquemos o no, porque eso se establece en la clase base y luego solo tienen que coincidir las firmas de las funciones
		std::string	getIdea(int index) const; // No se pide en el subject, solo para propositos de testing en el main()
		void	setIdea(int index, const std::string& idea); // No se pide en el subject, solo para propositos de testing en el main()
};

#endif
