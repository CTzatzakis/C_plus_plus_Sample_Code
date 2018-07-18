#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>

int main() {
    char input;
    int choice;
    std::cout <<"[1]. Enter one (1) for character entry."<<std::endl;
    std::cout <<"[2]. Enter two (2) to exit."<<std::endl;
    std::cout <<"Enter action of choice:"<<std::endl;
    std::cin >> choice;

    if(choice==1)
    {
        std::cout <<"Give a character:";
        std::cin >> input;
        if(isdigit(input))
        {
            std::cout <<std::endl<<"Input is a number, ["<<input<<"]";
        }
        else if (isalpha(input))
        {
            std::cout <<std::endl<<"Input is a letter, ["<<input<<"]";
        }
    }
    else if(choice==2)
    {
        exit(0);
    }
    else
        std::cout <<std::setw(12)<<"Not a valid choice."<<std::endl;

    return 0;
} // end of main
