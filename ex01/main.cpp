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
	ScavTrap scav("Frank");
	scav.guardGate();
	ScavTrap scav2;

	scav.takeDamage(5);
	scav.takeDamage(4);

	scav2.attack("John");
	scav2.takeDamage(20);

	scav2 = scav;
	scav2.setName("Gonk");

	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);
	scav.beRepaired(8);

	scav.beRepaired(8);
	scav.attack("Gonk");



	scav.takeDamage(6);
	scav.takeDamage(6);

	scav2.takeDamage(6);
	scav2.takeDamage(6);


	return (0);
}
