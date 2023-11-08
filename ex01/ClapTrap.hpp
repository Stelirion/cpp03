#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class clapTrap
{
    public:
    clapTrap();
        clapTrap(const std::string &name);
        clapTrap(const clapTrap &clapTrap);
        clapTrap operator=(const clapTrap &clapTrap);
        ~clapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif
