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

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("Ana");

	scav.attack("Rui");
	scav.attack("Manuel");
	scav.attack("Maria");
	scav.attack("Leonor");
	scav.attack("Ana");
	scav.attack("Jose");
	scav.guardGate();

    ScavTrap Filipe("Filipe");

	while (Filipe.getHitPoints())
	{
		Filipe.takeDamage(20);
		Filipe.beRepaired(10);
	}
	Filipe.takeDamage(1);
	Filipe.guardGate();
	scav = Filipe;
	std::cout << "New name: " << scav.getName() << std::endl;

	return (0);
	return (0);
}
