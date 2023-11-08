/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 04:59:18 by ngennaro          #+#    #+#             */
/*   Updated: 2023/11/08 04:59:19 by ngennaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class fragTrap : public clapTrap
{
    public:
        fragTrap();
        fragTrap(std::string const &name);
        fragTrap(fragTrap &fragTrap);
        ~fragTrap();
        fragTrap &operator=(fragTrap const &fragTrap);
        void highFivesGuys(void);
};
