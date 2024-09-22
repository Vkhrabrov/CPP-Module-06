/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionsFunctions.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:22:33 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/22 21:38:06 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

template<typename T>
void ScalarConverter::convertToChar(T input){
    std::cout << "char: " << static_cast<char>(input) << std::endl;
}

template<typename T>
void ScalarConverter::convertToInt(T input){
    std::cout << "int: " << static_cast<int>(input) << std::endl;
}

template<typename T>
void ScalarConverter::convertToFloat(T input){
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(input) << "f" << std::endl;
}

template<typename T>
void ScalarConverter::convertToDouble(T input){
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(input) << std::endl;
}