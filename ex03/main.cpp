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

    DiamondTrap Hank("Hank");

	while (Hank.getHitPoints())
	{
		Hank.takeDamage(20);
		Hank.beRepaired(10);
	}
	Hank.takeDamage(1);
	Hank.highFivesGuys();
	Hank.whoAmI();

	return (0);
}
