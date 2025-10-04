/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:40:30 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/04 15:58:15 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Zuko");
	ScavTrap b("Aang");

	a.attack("Aang");
	b.takeDamage(20);
	b.beRepaired(5);
	b.guardGate();
}