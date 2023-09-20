#include <iostream>
#include <string>

class clapTrap
{
    public:
        clapTrap(const std::string &name);
        clapTrap(const clapTrap &clapTrap);
        clapTrap operator=(const clapTrap &clapTrap);
        ~clapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};