#include"speechMananger.h"
int main()
{
	//创建管理系统
	speechManager sm;
	
	int userChoice = 0;
	while (true) {
		sm.showMenu();
		std::cout << "please select your option:";
		std::cin >> userChoice;
		switch (userChoice)
		{
		case 0:
			sm.exitTheSystem();
		case 1:

		}
		std::cin.get();
	}
}