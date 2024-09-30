/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:51:41 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/30 13:35:30 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char * argv[]){

    if (argc > 1 && argc < 3)
    {
        std::string input = argv[1];
        ScalarConverter::convertToVar(input);
    }
    else 
        std::cout << "The number of parameters is invalid" << std::endl;
    return 0;
}