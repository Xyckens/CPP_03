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
	FragTrap frag("Frank");
	frag.highFivesGuys();
	FragTrap frag2;

	frag.takeDamage(5);
	frag.takeDamage(4);

	frag2.attack("John");
	frag2.takeDamage(20);

	frag2 = frag;
	frag2.setName("Gonk");

	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);
	frag.beRepaired(8);

	frag.beRepaired(8);
	frag.attack("Gonk");



	frag.takeDamage(6);
	frag.takeDamage(6);

	frag2.takeDamage(6);
	frag2.takeDamage(6);


	return (0);
}
