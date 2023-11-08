/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:59:05 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:59:06 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

scavTrap::scavTrap(): clapTrap("Regis"){
    std::cout << "scavTrap " << _name << " is born!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

scavTrap::scavTrap(std::string const &name): clapTrap(name){
    std::cout << "scavTrap " << name << " is born!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

scavTrap::~scavTrap(){
    std::cout << "scavTrap " << this->_name << " is dead!" << std::endl;
}

void scavTrap::guardgate(std::string const &target){
    std::cout << "scavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

scavTrap::scavTrap(scavTrap &other) : clapTrap(other){
    std::cout << "scavTrap " << this->_name << " is born!" << std::endl;
}

scavTrap &scavTrap::operator=(scavTrap const &scavTrap){
    std::cout << "scavTrap " << this->_name << " is born by assignation!" << std::endl;
    this->_name = scavTrap._name;
    this->_hitPoints = scavTrap._hitPoints;
    this->_energyPoints = scavTrap._energyPoints;
    this->_attackDamage = scavTrap._attackDamage;
    return *this;
}