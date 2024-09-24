/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vadimhrabrov <vadimhrabrov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:49:06 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/24 20:43:32 by vadimhrabro      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "The default constructor has been used" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src){
    (void)src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src){
    (void)src;
    return *this;
    }

ScalarConverter::~ScalarConverter(){
    std::cout << "The destructor has been used" << std::endl;
}

int stringToInt(const std::string& str) {
    std::stringstream ss(str);
    int result;
    ss >> result;
    std::cout << result << std::endl;
    return result;
}

float stringToFloat(const std::string& str) {
    std::string temp = str;

    // If the last character is 'f', remove it
    if (!temp.empty() && temp[temp.size() - 1] == 'f') {
        temp.erase(temp.size() - 1);  // Remove the 'f' by erasing the last character
    }

    std::stringstream ss(temp);
    float result;
    ss >> result;
    return result;
}

double stringToDouble(const std::string& str) {
    std::stringstream ss(str);
    double result;
    ss >> result;
    return result;
}

template<typename T>
void convert(T input){
    // std::cout << input << std::endl;
    ScalarConverter::convertToChar(input);
    ScalarConverter::convertToInt(input);
    ScalarConverter::convertToFloat(input);
    ScalarConverter::convertToDouble(input);
}

void ScalarConverter::convertToVar(const std::string &string) {
    try {
        // Check for char
        if (string.size() == 1 && std::isprint(string[0]) && !std::isdigit(string[0])) {
            char value = string[0];
            std::cout << "Detected char" << std::endl;
            convert(value);
        }
        // Check for int
        else if (string.find('.') == std::string::npos && string.find('f') == std::string::npos
            && string.find('n') == std::string::npos) {
            int value = stringToInt(string);  // Using stringstream for conversion
            std::cout << "Detected int" << std::endl;
            convert(value);
        }
        // Check for float
        else if (string.find('.') != std::string::npos && string[string.size() - 1] == 'f') {  // Using size()-1 instead of back()
            float value = stringToFloat(string);  // Using stringstream for conversion
            // std::cout << "the value during de-stringing: " << value << std::endl;
            std::cout << "Detected float" << std::endl;
            convert(value);
        }
        else if (string == "+inff" || string == "-inff") {
            float value = (string == "+inff") 
                          ? std::numeric_limits<float>::infinity() 
                          : -std::numeric_limits<float>::infinity();
            std::cout << "Detected float (infinity)" << std::endl;
            convert(value);
        }
        else if (string == "nanf") {
            float value = std::numeric_limits<float>::quiet_NaN();  // Assign NaN
            std::cout << "Detected float (NaN)" << std::endl;
            convert(value);
        }
        // Check for double
        else if (string.find('.') != std::string::npos) {
            double value = stringToDouble(string);  // Using stringstream for conversion
            std::cout << "Detected double" << std::endl;
            convert(value);
        }
        else if (string == "+inf" || string == "-inf") {
            float value = (string == "+inf") 
                          ? std::numeric_limits<double>::infinity() 
                          : -std::numeric_limits<double>::infinity();
            std::cout << "Detected double (infinity)" << std::endl;
            convert(value);
        }
        else if (string == "nan") {
            float value = std::numeric_limits<double>::quiet_NaN();  // Assign NaN
            std::cout << "Detected double (NaN)" << std::endl;
            convert(value);
        }
        else {
            std::cout << "Unrecognized format" << std::endl;
        }
    } catch (const std::exception &e) {
        std::cout << "Conversion error: " << e.what() << std::endl;
    }
}