/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:34:01 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/01 18:48:10 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Sponge");
	ClapTrap b("Patrick");
	ClapTrap c;
	
	a.attack("Patrick");
	b.takeDamage(15);
	b.beRepaired(15);
	for (int i = 0; i < 10; i++)
	{
		a.attack("Patrick");
	}
	for (int i = 0; i < 10; i++)
	{
		b.beRepaired(1);
	}
}