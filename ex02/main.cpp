/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:23:45 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/25 16:23:46 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Ana");

	frag.attack("Rui");
	frag.attack("Manuel");
	frag.attack("Maria");
	frag.attack("Leonor");
	frag.attack("Ana");
	frag.attack("Jose");
	frag.highFivesGuys();

    FragTrap Filipe("Filipe");

	while (Filipe.getHitPoints())
	{
		Filipe.takeDamage(20);
		Filipe.beRepaired(10);
	}
	Filipe.takeDamage(1);
	Filipe.highFivesGuys();
	frag = Filipe;
	std::cout << "New name: " << frag.getName() << std::endl;

	return (0);
}
