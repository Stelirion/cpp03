#include "clapTrap.hpp"
#include <iostream>
#include <string>

class fragTrap : public clapTrap
{
    public:
        fragTrap(std::string const &name);
        fragTrap(fragTrap &fragTrap);
        ~fragTrap();
        fragTrap &operator=(fragTrap const &fragTrap);
        void highFivesGuys(void);
};
