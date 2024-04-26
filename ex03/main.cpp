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

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Gonk("Gonk");

	Gonk.attack("Rui");
	Gonk.attack("Manuel");
	Gonk.attack("Maria");
	Gonk.attack("Leonor");
	Gonk.attack("Gonk");
	Gonk.attack("Jose");
	Gonk.highFivesGuys();
	Gonk.whoAmI();

    DiamondTrap Filipe("Filipe");

	while (Filipe.getHitPoints())
	{
		Filipe.takeDamage(20);
		Filipe.beRepaired(10);
	}
	Filipe.takeDamage(1);
	Filipe.highFivesGuys();
	Filipe.whoAmI();

	return (0);
}
