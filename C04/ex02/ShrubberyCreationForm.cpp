/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:47:26 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/27 16:58:18 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137)
{
    //std::cout << "constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
    //std::cout << "constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src)
{
    //std::cout << "Copy constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    Form::operator=(src);
    
    return (*this);
}

void ShrubberyCreationForm::executionForm(Bureaucrat const &executor) const
{
    std::ofstream output;

    output.open((executor.getName() + "_shrubbery").c_str());
    if (output.is_open())
    {
        output << "                                                      ." << std::endl;
        output << "                                .         ;" << std::endl;
        output << "    .              .              ;%     ;;" << std::endl;
        output << "        ,           ,                :;%  %;" << std::endl;
        output << "        :         ;                   :;%;'     .," << std::endl;
        output << ",.        %;     %;            ;        %;'    ,;" << std::endl;
        output << ";       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        output << "%;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
        output << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        output << "    `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        output << "    `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        output << "        `:%;.  :;bd%;          %;@%;'" << std::endl;
        output << "        `@%:.  :;%.         ;@@%;'" << std::endl;
        output << "            `@%.  `;@%.      ;@@%;" << std::endl;
        output << "            `@%%. `@%%    ;@@%;" << std::endl;
        output << "                ;@%. :@%%  %@@%;" << std::endl;
        output << "                %@bd%%%bd%%:;" << std::endl;
        output << "                    #@%%%%%:;;" << std::endl;
        output << "                    %@@%%%::;" << std::endl;
        output << "                    %@@@%(o);  . '" << std::endl;
        output << "                    %@@@o%;:(.,'" << std::endl;
        output << "                `.. %@@@o%::;" << std::endl;
        output << "                    `)@@@o%::;" << std::endl;
        output << "                    %@@(o)::;" << std::endl;
        output << "                    .%@@@@%::;" << std::endl;
        output << "                    ;%@@@@%::;." << std::endl;
        output << "                ;%@@@@%%:;;;." << std::endl;
        output << "            ...;%@@@@@%%:;;;;,.." << std::endl;
    }
        else
            std::cout << "error occured while opening file" << std::endl;
} 