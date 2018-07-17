#include <iostream>

int main() {
    int i=0,j=0,N=10,M=10;
    std::cout << "Count to Ten" << std::endl;
    for (i = 0; i < N; i++)
    {
        std::cout << i+1 << std::endl;
    }
    std::cout << "Stars DESC" << std::endl;
    for(i=0; i<N; i++)
    {
        for(j=i; j<M; j++)
        {
            std::cout <<"*";
        } std::cout << std::endl;
    }

    std::cout << "Stars ASC" << std::endl;

    for(i=0,M=9; i<N,M>=0; M--,i++)
    {
        for(j=N; j>M; j--)
        {
            std::cout <<"*";
        } std::cout << std::endl;
    }
    
    for (x=0,y=0; x+y<100; x=x+10,y=y+20)
        std::cout <<"x="<<x<<" y="<<y<<" x+y="<<x+y<< std::endl;
    
    return 0;
} // end of main
