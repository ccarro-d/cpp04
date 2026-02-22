/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:01:18 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/22 22:03:04 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	//const AAnimal*	h = new AAnimal(); // Comentado porque ya no se puede instanciar (probar a descomentar para ver error)
	const AAnimal*	i = new Dog(); // Upcast (Dog → AAnimal*), polimorfismo a través de dispatch dinámico (virtual) y destrucción correcta vía destructor virtual.
	const AAnimal*	j = new Cat();
	i->makeSound();
	j->makeSound();
	delete j; //should not create a leak
	delete i;

	//AAnimal	AAnimal; // Comentado porque ya no se puede instanciar (probar a descomentar para ver error)
	Dog		dog;
	Cat		cat;

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