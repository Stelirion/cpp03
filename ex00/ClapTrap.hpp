/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:58:47 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:58:48 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};