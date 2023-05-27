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

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("frank");
	ClapTrap clap2;
	clap.takeDamage(5);
	clap.takeDamage(4);
	clap2 = clap;
	clap2.setName("Gonk");
	clap.beRepaired(8);
	clap.takeDamage(6);
	clap2.takeDamage(6);
	clap.takeDamage(6);
	clap2.takeDamage(6);


	return (0);
}
