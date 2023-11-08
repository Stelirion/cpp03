/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:58:55 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:58:56 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

clapTrap::clapTrap(): _name("George"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "clapTrap " << this->_name << " is born!" << std::endl;
}

clapTrap::clapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "clapTrap " << this->_name << " is born!" << std::endl;
}

clapTrap::~clapTrap(){
    std::cout << "clapTrap " << this->_name << " is dead!" << std::endl;
}

clapTrap::clapTrap(const clapTrap &clapTrap):
    _name(clapTrap._name),
    _hitPoints(clapTrap._hitPoints),
    _energyPoints(clapTrap._energyPoints),
    _attackDamage(clapTrap._attackDamage)
{
    std::cout << "clapTrap " << this->_name << " is born!" << std::endl;
}

clapTrap clapTrap::operator=(const clapTrap &other){
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

void clapTrap::attack(const std::string &target){
    if (this->_energyPoints == 0)
        std::cout << "clapTrap " << this->_name << " has no energy points!" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "clapTrap " << this->_name << " has no hit points!" << std::endl;
    else
    {
        std::cout << "clapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
}

void clapTrap::beRepaired(unsigned int amount){
    if (this->_energyPoints == 0)
        std::cout << "clapTrap " << this->_name << " has no energy points!" << std::endl;
    else if (this->_hitPoints == 0)
        std::cout << "clapTrap, to late " << this->_name << " is already death" << std::endl;
    else
    {
        std::cout << "clapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
    }
}

void clapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints == 0)
        std::cout << "clapTrap " << this->_name << " is already death" << std::endl;
    else
    {
        std::cout << "clapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
}