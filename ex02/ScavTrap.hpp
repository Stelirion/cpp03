/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:59:27 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:59:28 by ngennaro         ###   ########.fr       */
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
        void guardgate();
};
