#include <iostream>
#include <iomanip>

int main() {
    float radius,perim,area;
    const float PI = 3.14159;

    std::cout <<"Give circle R:";
    std::cin >> radius;

    perim = 2* PI*radius;
    area = PI * radius * radius;
    std::cout <<std::setw(12)<<"Perimeter:"<<std::setw(5)<<std::setprecision(9)<<perim<<std::endl;
    std::cout <<std::setw(12)<<"Area:"<<std::setw(5)<<std::setprecision(9)<<area<<std::endl;

    return 0;
} // end of main
