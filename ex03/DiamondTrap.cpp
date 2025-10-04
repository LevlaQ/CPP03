/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:41:08 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/04 19:03:45 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->name = "Mr. Krab";
	this->hit_points = (*this).FragTrap::hit_points;
	this->energy_points = (*this).ScavTrap::energy_points;
	this->attack_damage = (*this).FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "DiamondTrap: Name constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hit_points = (*this).FragTrap::hit_points;
	this->energy_points = (*this).ScavTrap::energy_points;
	this->attack_damage = (*this).FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	(*this) = copy; 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name: " << this->name << std::endl;
	std::cout << "Changed Clap name: " << ClapTrap::name << std::endl;
}
