/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadimhrabrov <vadimhrabrov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:13:23 by vadimhrabro       #+#    #+#             */
/*   Updated: 2024/09/25 23:03:27 by vadimhrabro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
    std::cout << "The default constructor has been used" << std::endl;
}

Serializer::Serializer(const Serializer &src){
    (void)src;
}

Serializer &Serializer::operator=(const Serializer &src){
    (void)src;
    return *this;
}

Serializer::~Serializer(){
    std::cout << "The destructor has been used" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
    std::cout << "Pointer: " << ptr << std::endl;
    // std::cout << "Pointer as unsigned integer: " << address << std::endl;
    return address;
}

Data* Serializer::deserialize(uintptr_t raw){
    Data* pointer = reinterpret_cast<Data*>(raw);
    std::cout << "Unsigned integer: " << raw << std::endl;
    std::cout << "Unsigned integer as pointer: " << pointer << std::endl;
    return pointer;
}