#include<iostream>
#include"day3_manager.h"
#include"worker.h"
#include"financialManager.h"
#include"Employee.h"
using namespace std;
int main() {
	workerManager wm;
	wm.showMenu();
	while (true) {
		int result = 0;
		cout << "please enter the selection:" << endl;
		cin >> result;
		switch (result) {
		case 0:
			wm.exitTheSystem();
		case 1:
			wm.addEmp();

		}
	
		
	}
	

	
}