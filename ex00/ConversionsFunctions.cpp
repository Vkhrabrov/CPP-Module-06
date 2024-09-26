/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionsFunctions.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:22:33 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/26 19:12:52 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

template<typename T>

void ScalarConverter::convertToChar(T input) {
    // Check for NaN or infinity
    // std::cout << "in convertToChar: " << input << std::endl;
    if (std::isnan(input) || std::isinf(input) || input < 0)
        std::cout << "char: impossible" << std::endl;
    else if (input < 32)
        std::cout << "char: Non displayable" << std::endl;
    else if (input > 126)
        std::cout << "char: impossible" << std::endl;
    else {
        char c = static_cast<char>(input);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
    }
}

template<typename T>
void ScalarConverter::convertToInt(T input) {
    // Check for NaN or infinity
    if (std::isnan(input) || std::isinf(input))
        std::cout << "int: impossible" << std::endl;
    else if (input > static_cast<float>(INT_MAX) || input < static_cast<float>(INT_MIN))
        std::cout << "int: impossible" << std::endl;
    else
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