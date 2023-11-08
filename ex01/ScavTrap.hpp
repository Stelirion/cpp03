#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class scavTrap : public clapTrap
{
    public:
        scavTrap();
        scavTrap(std::string const &name);
        scavTrap(scavTrap &scavTrap);
        ~scavTrap();
        scavTrap &operator=(scavTrap const &scavTrap);
        void guardgate(std::string const &target);
};
