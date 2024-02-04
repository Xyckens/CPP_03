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
	DiamondTrap diam("Frank");
	diam.whoAmI();
	DiamondTrap diam2;

	diam.takeDamage(5);
	diam.takeDamage(4);

	diam2.attack("John");
	diam.attack("John");
	diam2.takeDamage(20);

	diam.beRepaired(8);
	diam.attack("Gonk");

	diam.takeDamage(30);
	diam.takeDamage(30);

	diam2.takeDamage(30);
	diam2.takeDamage(30);

	return (0);
}
