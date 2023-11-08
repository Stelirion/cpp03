/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:59:07 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:59:08 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
