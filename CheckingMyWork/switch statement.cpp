//#include <iostream>
//int main()
//{
//	int choice;
//	std::cout << "Pick a number between 1 and 4" << std::endl;
//	std::cin >> choice;
//	switch (choice)
//	{											//switch statements are held in one set of '{}'
//	case 1:										//be sure to begin with case 0 and not skip to number 1... i have a habit of forgetting 0
//		std::cout << "1" << std::endl;
//		break;									//each case statement MUST end with a 'break;'
//	case 2:
//		std::cout << "2 or 3" << std::endl;
//		break;
//	case 3:
//		std::cout << "2 or 3" << std::endl;
//		break;
//	case 4:
//
//		std::cout << "4" << std::endl;
//		break;
//	default:									//'default' is the same as an 'else' statement. it says what to do if all case statements return false
//		std::cout << "Invalid" << std::endl;
//		break;
//	}
//
//	system("pause");
//	return 0;
//}
//////okay, I am moving forward. I do have a running program, but it isn't working how I mean it to.
//////basically if I go through the windows debugger, "pick a number between 1 and 4" appears and works correctly.
//////what SHOULD happen is if i pick 1 it should print "1" back at me.
//////if i pick either 2 or 3 it shound print back "2 or 3"
//////if i pick 4 it should print back "4"
//////and if i pick any number that isn't 1-4, it should print invalid.
//////what is ACTUALLY happening is it is going by the case names. 
//////for instance, for 'case 0:' if i pick 0 in the window, "1" will print
//////it is the same in that if i pick 1, "2 or 3" will print and on...