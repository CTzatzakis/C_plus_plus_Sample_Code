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
