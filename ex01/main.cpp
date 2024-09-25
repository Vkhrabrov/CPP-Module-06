/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadimhrabrov <vadimhrabrov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:40:41 by vadimhrabro       #+#    #+#             */
/*   Updated: 2024/09/25 23:25:28 by vadimhrabro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data_instance = {42};
    Data* data_ptr = &data_instance;

    uintptr_t serialized_data = Serializer::serialize(data_ptr);
    std::cout << "Serialized data (uintptr_t): " << serialized_data << std::endl;

   
    Data* deserialized_ptr = Serializer::deserialize(serialized_data);
    std::cout << "Deserialized Data value: " << deserialized_ptr->value << std::endl;

    return 0;
}

