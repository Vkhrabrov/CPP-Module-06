/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:10:54 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/26 18:47:23 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp" 

int main(void){

    std::srand(std::time(0));

    Base* randomClassObj = generate();
    identify(*randomClassObj);
    identify(randomClassObj);

    delete randomClassObj;
    return 0;
}