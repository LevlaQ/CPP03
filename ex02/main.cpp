/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:18:48 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/04 16:19:57 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("Zuko");
	FragTrap b("Aang");

	a.attack("Aang");
	b.takeDamage(30);
	b.beRepaired(5);
	b.highFivesGuys();
}