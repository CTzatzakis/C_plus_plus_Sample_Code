/*
Develop a program that compares two character tables
*/
#include <cstdio>
#include <cstring>
#include <iostream>

int main()
{
    char msg1[100] = {"Hello to you"};
    char msg2[100] = {"Hello back"};
    int diff,diff2=0;
    size_t count=0;
	//  ^ variables ^
    std::cout << " first string = " << msg1 <<std::endl;
    std::cout << "second string = " << msg2 <<std::endl;
	
    diff = strcmp(msg1,msg2); // compare character tables
    
	if(diff==0)
        std::cout << "[ same strings ]" <<std::endl; //End of if
    else
        std::cout << "[ different strings ]" <<std::endl; //End of else

    while (diff2==0)
    {
        diff2 = strncmp(msg1,msg2,count);
        if(diff2==0)
            count++;
    } //end of while
    std::cout << "Same first " << count-1 <<" characters"<<std::endl;

return 0;
} //end of main
