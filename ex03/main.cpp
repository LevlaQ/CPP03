/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:18:48 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/05 14:01:35 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Iroh");

	a.whoAmI();
	a.beRepaired(5);
	a.takeDamage(67);
	a.attack("Azula");
}
