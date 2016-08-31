#include <iostream>
int main()
{
	int numA;
	int numB;
	char operation;

	std::cout << "Please provide me with the following:" << std::endl;							//this line runs properly
	std::cout << "Give me a number." << std::endl;												//this line runs properly


	std::cin >> numA;


	if (char 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z', '/', '*', '-', '+', '=', '_', ')', '(', '&', '^', '%', '$', '#', '@', '!', '`', '~', '}', ']', '{'.'[', '>', '<''.', ',';)
	
		{
			std::cout << "Error Invalid Input: Not an Intiger" << std::endl;
			std::cout << "And now give me a mathematical operation." << std::endl;						//this line runs properly
			std::cin >> operation;
		}


																				//this line runs properly
		if (operation != '+', '-', '*', '/', '%')
		{
			std::cout << "Error Invalid Input: Not a Mathematical Operator" << std::endl;
			std::cout << "And finally, give me another number." << std::endl;							//i think this line is running properly
			std::cin >> numB;
		}


																				//and here is where the code breaks i believe... what went wrong and what can i safely change without risk of breaking my code further?


		if (char 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z', '/', '*', '-', '+', '=', '_', ')', '(', '&', '^', '%', '$', '#', '@', '!', '`', '~', '}', ']', '{'.'[', '>', '<''.', ',';)
		{
			std::cout << "Error Invalid Input: Not an Intiger" << std::endl;
		
		}
	
	
	std::cout << "now sit back. I have the rest taken care of." << std::endl;


																								//matt said to try a switch statement... i could use the practice anyhow
	switch (operation)																			//so i give the switch statement int 'operation' to work with
	{
	case '+':																					//god was this annoying. the '' around the +... it took me forever to think about.  i have a program that runs, but not correctly. that might be breaking my program.
		std::cout << numA << '+' << numB << '=';												//fairly simple. if user puts a + for the variable 'operation' then the values for numA and numB will be summed up for the answer.
		std::cout << numA + numB << std::endl;
		break;																					//gotta remember those breaks
	case '-':																					//the same thought process follows for the rest of the case statements.
		std::cout << numA << '-' << numB << '=';
		std::cout << numA - numB << std::endl;
		break;
	case '/':
		std::cout << numA << '/' << numB << '=';
		std::cout << numA / numB << std::endl;													//under Mr. Matt's suggestion I am applying the cout functions to print out the actual user input in "numA (operation) numB"
		break;																					//it isn't working... i'll do more testing before asking for help.
	case '*':
		std::cout << numA << '*' << numB << '=';
		std::cout << numA * numB << std::endl;
		break;
	case '%':
		std::cout << numA << '%' << numB << '=';
		std::cout << numA % numB << std::endl;
		break;
	default:																	//default, remember that. it is the same as the 'else' in an if statement
		std::cout << "Error Invalid mathematical operation." << std::endl;		//not sure if this is required, but if i can get it all to run properly then this will help me deduce if everything is running properly
		break;
	}																																								//((then again what do i know? i'm not a programmer))
	
	system("pause");
	return 0;
}

//okay, so i know what the problem is. fixing it though...
//alright, let me break it down. with each of the cases, the operation symbols need to be...









//}
//if (operation == '+')
//{
//	std::cout << numA << '+' << numB;
//}
//else if (operation == '-')
//{
//	std::cout << numA - numB;
//}
//else if (operation == '/')
//{
//	std::cout << numA / numB;
//}
//else if (operation == '*')
//{
//	std::cout << numA * numB;
//}
//else if (operation == '%')
//{
//	std::cout << numA%numB;
//}
//else
//{
//	std::cout << "Error Invalid mathematical operation.";
//}