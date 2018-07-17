#include <iostream>
#include <cstdio>
#include <conio.h>
#include <cctype>

int main()
{
    char ch;
    std::cout <<"Start writing letters without enter"<<std::endl;
    std::cout <<"End program with a dot '.'\n"<<std::endl;
    do
    {
        ch=getche();
        std::cout <<" -> ";
        if (islower(ch))
            putchar(toupper(ch));
        else putchar(tolower(ch));
        std::cout <<std::endl;
    }
    while (ch!='.');         // end program with a '.'
    return 0;
} // end of main
