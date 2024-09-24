/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadimhrabrov <vadimhrabrov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:49:09 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/24 21:41:46 by vadimhrabro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <climits>

class ScalarConverter {

    public:
    
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter &operator=(const ScalarConverter &src);
    virtual ~ScalarConverter();  // Use virtual if inheritance is planned

    template<typename T>
    static void convertToChar(T input);
    template<typename T>
    static void convertToInt(T input);
    template<typename T>
    static void convertToFloat(T input);
    template<typename T>
    static void convertToDouble(T input);
    static void convertToVar(const std::string &string);
};

#include "ConversionsFunctions.cpp"

#endif
