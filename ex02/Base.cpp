/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:44:29 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/09/26 19:02:39 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp" 

Base::~Base(){
    std::cout << "The base destructor was used" << std::endl;
}

Base* generate(void){
    int r_num = std::rand() % 3;
    if (r_num == 0)
        return (new A);
    else if (r_num == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "The object is off A class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The object is off B class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The object is off C class" << std::endl;
}

void identify(Base& p){
    try{
        void (dynamic_cast<A&>(p));
        std::cout << "The reference is to A class" << std::endl;
    }
    catch (std::exception &e){}

    try{
        void (dynamic_cast<B&>(p));
        std::cout << "The reference is to B class" << std::endl;
    }
    catch (std::exception &e){}
    
    try{
        void (dynamic_cast<C&>(p));
        std::cout << "The reference is to C class" << std::endl;
    }
    catch (std::exception &e){}
}