#include <iostream>
#include "factorial.h"

int main(){
	std::cout<<"What number factorial do you want to count?: ";
	int n;
	std::cin>>n;
	int result =  factorial(n);
	std::cout << "The factorial of " << n << "is equal " << result;
}
