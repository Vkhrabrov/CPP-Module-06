/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:49:09 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/16 21:02:29 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ScalarConverter {

    public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &src);
    ScalarConverter &operator+(const ScalarConverter &src);
    ~ScalarConverter();

    static void convertToChar(const std::string &string);
    static void convertToInt(const std::string &string);
    static void convertToFloat(const std::string &string);
    static void convertToDouble(const std::string &string);

}