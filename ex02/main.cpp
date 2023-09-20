#include "clapTrap.hpp"
#include "scavTrap.hpp"
#include "fragTrap.hpp"

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

    scavTrap scavTrap1("boby2");
    scavTrap1.attack("mike");
    scavTrap1.takeDamage(5);
    scavTrap1.beRepaired(5);
    scavTrap1.guardgate("mike");

    fragTrap fragTrap1("boby3");
    fragTrap1.attack("yorick");
    fragTrap1.takeDamage(5);
    fragTrap1.beRepaired(5);
    fragTrap1.highFivesGuys();
}
