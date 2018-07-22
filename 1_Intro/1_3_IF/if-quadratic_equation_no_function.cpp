#include <iostream>
#include <iomanip>
#include<cstdio>
#include<conio.h>
#include<cmath> // sqrt(), fabs()

int main()
{
    double a,b,c, D, r1,r2, r,im;
    std::cout << "Solve for the roots of a quadratic equation" << std::endl;
    std::cout << "ax^2+bx+c=0" << std::endl;
    std::cout << "Give parameter a:"; //<< std::endl;
    std::cin >> a ;
    if (a==0)
    {
        std::cout << "For a 2nd order equation, a!=0. Try again" << std::endl;
        std::cout << "Give parameter a:";
        std::cin >> a ;
    }  //end of if

    std::cout << "Give parameter b:";// << std::endl;
    std::cin >> b ;
    std::cout << "Give parameter c:";// << std::endl;
    std::cin >> c ;
    std::cout <<std::setprecision(5)<< a <<"*x^2 + "<<std::setprecision(5)<< b <<"*x + "<<std::setprecision(5)<< c << " = 0" << std::endl;

    D = b*b-4*a*c;    // Distinctive

        if(D<0)  // for D<0, roots are conjugate complex οι ρίζες είναι συζυγείς µιγαδικές
            {
                std::cout << "There exist two conjugate complex roots:" << std::endl;
                r=-b/(2*a);
                im=sqrt(-D)/(2*a);
                std::cout <<"r1 = "<<std::setprecision(5)<< r <<" + "<<std::setprecision(5)<< im << std::endl;
                std::cout <<"r2 = "<<std::setprecision(5)<< r <<" - "<<std::setprecision(5)<< im << std::endl;
            }  //end of if
        else if (fabs(D)<1e-10)    // fabs → float,   abs → integer
            {   // for D=0, double root exist
                std::cout << "There exists a double root:" << std::endl;
                std::cout << "r1 = r2 = "<<std::setprecision(5)<< -b/(2*a) << std::endl;
            } //end of else if
        else // in any other case there are two real roots
            {
                std::cout << "There exist two real roots:" << std::endl;
                r1=(-b+sqrt(D))/(2*a);
                r2=(-b-sqrt(D))/(2*a);
                std::cout << "r1= " <<std::setprecision(5)<< r1 << std::endl;
                std::cout << "r2= " <<std::setprecision(5)<< r2 << std::endl;
            } //end of else
    return 0;
} //end of main