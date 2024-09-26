/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:08:33 by vadimhrabro       #+#    #+#             */
/*   Updated: 2024/09/26 21:45:18 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h> 
#include "Data.hpp"

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer &src);
        Serializer &operator=(const Serializer &src);
        ~Serializer();
    public:

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif