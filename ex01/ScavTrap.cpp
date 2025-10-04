/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:02:26 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/04 15:39:42 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->name = "Mr. Krab";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap: Name constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	(*this) = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_points != 0)
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "I'm too tired to attack!" << std::endl;
	if (this->energy_points > 0)
		this->energy_points -= 1;
	std::cout << "--ScavTrap " << this->name << " has " << this->energy_points << " energy points left" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " guards the gate! (Gate keeper mode)" << std::endl;
}