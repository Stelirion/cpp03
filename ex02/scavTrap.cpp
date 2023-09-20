#include "scavTrap.hpp"

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
    this->attack(target);
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