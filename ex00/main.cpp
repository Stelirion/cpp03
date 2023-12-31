/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:58:51 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:58:52 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
    std::cout << " === === === " << std::endl;
    std::cout << "Go to use boby copy to reset boby spec" << std::endl;
    std::cout << " === === === " << std::endl;
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
    std::cout << " === === === " << std::endl;
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(5);
}
