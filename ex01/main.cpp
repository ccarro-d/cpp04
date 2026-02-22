/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:01:18 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 20:25:16 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// Subject original main():
	const Animal*	j = new Dog(); // Upcast (Dog → Animal*), polimorfismo a través de dispatch dinámico (virtual) y destrucción correcta vía destructor virtual.
	const Animal*	i = new Cat();
	delete j; //should not create a leak
	delete i;

	// Subject requested behavior:
	const int	n	= 6;
	const Animal*	animals[n];
	for (int k = 0; k < n; k++)
	{
		if (k % 2 == 0)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}

	for (int k = 0; k < n; k++)
		delete animals[k];

	// Prove deepcopy and not shallow copy on Brains:
	Dog dog;
	Cat cat;

	dog.setIdea(0, "bone");
	cat.setIdea(0, "fishbone");

	Dog	otherDog(dog);
	Cat otherCat(cat);

	otherDog.setIdea(0, "digging");
	otherCat.setIdea(0, "climbing");

	std::cout << "dog thinks on " << dog.getIdea(0) << std::endl;
	std::cout << "cat thinks on " << cat.getIdea(0) << std::endl;
	std::cout << "otherDog thinks on " << otherDog.getIdea(0) << std::endl;
	std::cout << "otherCat thinks on " << otherCat.getIdea(0) << std::endl;
	
	return 0;
}