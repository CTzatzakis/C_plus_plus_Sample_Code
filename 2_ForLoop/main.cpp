#include <iostream>

int main() {
    int i=0,j=0,N=10,M=10;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            std::cout <<"*";
        } std::cout << std::endl; M--;
    }

    std::cout << "Hello, World!" << std::endl;

    for(i=0; i<N; i++)
    {   M++;
        for(j=0; j<M; j++)
        {
            std::cout <<"*";
        } std::cout << std::endl;
    }
    return 0;
}