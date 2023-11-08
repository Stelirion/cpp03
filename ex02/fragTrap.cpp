/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:59:16 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:59:17 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

fragTrap::fragTrap(): clapTrap("René"){
    std::cout << "fragTrap " << _name << " is born!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

fragTrap::fragTrap(std::string const &name): clapTrap(name){
    std::cout << "fragTrap " << name << " is born!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

fragTrap::~fragTrap(){
    std::cout << "fragTrap " << this->_name << " is dead!" << std::endl;
}

void fragTrap::highFivesGuys(void){
    std::cout << "fragTrap " << this->_name << " make a high five" << std::endl;
}

fragTrap::fragTrap(fragTrap &other) : clapTrap(other){
    std::cout << "fragTrap " << this->_name << " is born!" << std::endl;
}

fragTrap &fragTrap::operator=(fragTrap const &fragTrap){
    std::cout << "fragTrap " << this->_name << " is born by assignation!" << std::endl;
    this->_name = fragTrap._name;
    this->_hitPoints = fragTrap._hitPoints;
    this->_energyPoints = fragTrap._energyPoints;
    this->_attackDamage = fragTrap._attackDamage;
    return *this;
}