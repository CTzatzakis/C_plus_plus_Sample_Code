/*
Develop a program that examines the length of the integer type and floating-point type
*/
#include <iostream>
#include <cstdio>
#include <cfloat>
#include <climits>
#include <iomanip>

int main()
{
    std::cout <<std::setw(12)<<"int is:"<<std::setw(5)<< sizeof(int) <<" bytes"<<std::endl;
    std::cout <<std::setw(12)<<"short is:"<<std::setw(5)<< sizeof(short) <<" bytes"<<std::endl;
    std::cout <<std::setw(12)<<"long is:"<<std::setw(5)<< sizeof(long) <<" bytes"<<std::endl;
    std::cout <<std::setw(12)<<"float is:"<<std::setw(5)<< sizeof(float) <<" bytes"<<std::endl;
    std::cout <<std::setw(12)<<"double is:"<<std::setw(5)<< sizeof(double) <<" bytes"<<std::endl;
    std::cout <<std::setw(12)<<"max int:"<<std::setw(15)<< INT_MAX <<std::setw(12)<<"min int:"<<std::setw(15)<< INT_MIN<<std::endl;
    std::cout <<std::setw(12)<<"max short:"<<std::setw(15)<< SHRT_MAX <<std::setw(12)<<"min short:"<<std::setw(15)<< SHRT_MIN<<std::endl;
    std::cout <<std::setw(12)<<"max long:"<<std::setw(15)<< LONG_MAX <<std::setw(12)<<"min long:"<<std::setw(15)<< LONG_MIN<<std::endl;
    std::cout <<std::setw(12)<<"max float:"<<std::setw(15)<< FLT_MAX <<std::setw(12)<<"min float:"<<std::setw(15)<< FLT_MIN<<std::endl;
    std::cout <<std::setw(12)<<"max double:"<<std::setw(15)<< DBL_MAX <<std::setw(12)<<"min double:"<<std::setw(15)<< DBL_MIN<<std::endl;

    return 0;
} //end of main