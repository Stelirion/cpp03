#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    clapTrap clapTrap1("boby");
    clapTrap clapTrap2(clapTrap1);

    clapTrap1.attack("jake");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(5);
    std::cout << "Now kill boby" << std::endl;
    clapTrap1.takeDamage(10);
    clapTrap1.attack("jake");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(5);
    std::cout << "Go to use boby copy to reset boby spec" << std::endl;
    clapTrap1 = clapTrap2;
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.attack("jake");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(5);

std::cout << "   ----    ----   ----" << std::endl;
    scavTrap scavTrap1("boby");
    scavTrap1.attack("test");
    scavTrap1.takeDamage(5);
    scavTrap1.beRepaired(5);
    scavTrap1.guardgate("test");
}
