/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:49:41 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/04 15:54:57 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default constructor called" << std::endl;
	this->name = "Mr. Krab";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap: Name constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	(*this) = copy; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	if (this != &assign)
	{
		this->name = assign.name;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points != 0)
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "I'm too tired to attack!" << std::endl;
	if (this->energy_points > 0)
		this->energy_points -= 1;
	std::cout << "--ClapTrap " << this->name << " has " << this->energy_points << " energy points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
	if ((static_cast<int>(this->hit_points) - static_cast<int>(amount)) < 0)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "--ClapTrap " << this->name << " has " << this->hit_points << " hit points left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points != 0)
		std::cout << "ClapTrap " << this->name << " repairs itself" << std::endl;
	else
		std::cout << "I'm too tired to do anything!" << std::endl;
	this->hit_points += amount;
	if (this->energy_points > 0)
		this->energy_points -= 1;
	std::cout << "--ClapTrap " << this->name << " has now " << this->hit_points << " hit points" << std::endl;
	std::cout << "--ClapTrap " << this->name << " has " << this->energy_points << " energy points left" << std::endl;
}