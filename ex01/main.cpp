/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:40:41 by vadimhrabro       #+#    #+#             */
/*   Updated: 2024/09/26 17:37:14 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data_instance = {42};
    Data* data_ptr = &data_instance;

    uintptr_t serialized_data = Serializer::serialize(data_ptr);
    std::cout << "Serialized data (uintptr_t): " << serialized_data << std::endl << std::endl;

   
    Data* deserialized_ptr = Serializer::deserialize(serialized_data);
    std::cout << "Deserialized Data value: " << deserialized_ptr->value << std::endl;

    return 0;
}

