#include"speechMananger.h"
#include<string>
int main()
{
	//创建管理系统
	speechManager sm;
	for (std::map<int,speaker>::iterator it = sm.mMenu.begin();it!=sm.mMenu.end();it ++)
	{
		std::cout << it->first << ",name:" << it->second.m_name<<".score:"<<it->second.m_score[0]<<std::endl;
	}
	

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
			sm.SpeechContest();
			std::cin.get();
			break;
		case 2:
			sm.saveTheFiles();
			break;
		case 3:
			sm.clearTheFiles();
			break;
		case 4:
			sm.readTheFiles();
			break;
		}
	}
}