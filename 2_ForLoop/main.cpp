#include <iostream>

int main() {
    int i=0,j=0,N=10,M=10;

    for(i=0; i<N; i++)
    {
        for(j=i; j<M; j++)
        {
            std::cout <<"*";
        } std::cout << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    M=9;
    for(i=0; i<N; i++)
    {
        for(j=N; j>M; j--)
        {
            std::cout <<"*";
        } std::cout << std::endl; M--;
    }
    return 0;
}