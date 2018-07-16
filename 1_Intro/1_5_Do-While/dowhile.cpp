#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
 
int main() {
    char input;
    int choice,grade;


    do
    {
        std::cout <<"[1]. Enter one   (1)  for character entry."<<std::endl;
        std::cout <<"[2]. Enter two   (2)  for a hello."<<std::endl;
        std::cout <<"[3]. Enter three (3)  to rate inputted grade (using switch-case) - [0,10]"<<std::endl;
        std::cout <<"[4]. Enter four  (4)  to rate inputted grade (using if) - [0,10]"<<std::endl;
        std::cout <<"[5]. Enter five  (5)  to exit."<<std::endl;
        std::cout <<"Enter action of choice:"<<std::endl;
        std::cin >> choice;
        switch (choice)
        {
            case 1:
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
                break;
            case 2:
                std::cout <<"Hello!"<<std::endl;
                break;
            case 3:
                std::cout <<"(- sc -) Insert grade:";
                std::cin >> grade;
                switch (grade)
                {
                    case 10:
                    case 9:
                        std::cout <<"excellent";
                        break;
                    case 8:
                    case 7:
                        std::cout <<"very good";
                        break;
                    case 6:
                        std::cout <<"good";
                        break;
                    case 5:
                        std::cout <<"pass";
                        break;
                    default:
                        std::cout <<"fail";
                        break;
                }
                break;
            case 4:

                std::cout <<"(- if -)Insert grade:";
                std::cin >> grade;
                if((grade>8)&&(grade<11))
                    std::cout <<"excellent";
                else if((grade>6)&&(grade<9))
                    std::cout <<"very good";
                else if(grade==6)
                    std::cout <<"good";
                else if(grade==5)
                    std::cout <<"pass";
                else if((grade>=0)&&(grade<5))
                    std::cout <<"fail";
                else
                    std::cout <<"Out of bounds";

                break;
            case 5:
                //exit(0);
                break;
            default:
                std::cout <<std::setw(12)<<"Not a valid choice."<<std::endl;
                break;
        }

    }while (choice!=5);


    return 0;
}
