#include<iostream>
#include"day3_manager.h"
#include"worker.h"
#include"Employee.h"
#include"financialManager.h"
using namespace std;
workerManager::workerManager() {
	//初始化职工人数
     empNum = 0;
	//初始化职工数组
	 workerArray = nullptr;

	
   
    

}
void workerManager::showMenu() {
    cout << "**************************************************" << endl;
    cout << "**********  Welcome to Employee Management System!  **********" << endl;
    cout << "**************  0. Exit the Program  **************" << endl;
    cout << "**************  1. Add Employee Information  **************" << endl;
    cout << "**************  2. Display Employee Information  **************" << endl;
    cout << "**************  3. Delete Resigned Employees  **************" << endl;
    cout << "**************  4. Modify Employee Information  **************" << endl;
    cout << "**************  5. Search Employee Information  **************" << endl;
    cout << "**************  6. Sort by Employee ID  **************" << endl;
    cout << "**************  7. Clear All Records  **************" << endl;
    cout << "**************************************************" << endl;
    cout << endl;
    
}
void workerManager::addEmp() {
    //初始化数组长度
    int ArraySize = 0;
	cout << "Please enter the number of employees to add: " << endl;
	cin >> ArraySize;
    if (ArraySize > 0) {
        //根据用户输入的长度，创建新的worker双指针数组，长度为newSize
		int newSize = this->empNum + ArraySize;
        //创建一个worker指针类型的数组，用双指针进行接收
		worker**newSpace = new worker* [newSize];
        //如果workerArray本身的指针数组中的数据不是0，就把它的数据复制到新的数组里
        if (this->workerArray != nullptr) {
            for (int i = 0; i < this->empNum; i++) {
                newSpace[i] = this->workerArray[i];
            }
            
        }
        //剩下的新部分，一个一个添加
        for (int i = 0;i < ArraySize;i++) {
            //输入新员工id，姓名，deptId和员工类型
            int id;
            string name;
			int deptId;
			cout << "please enter "<<i+1 <<" the employee's id: " << endl;
			cin >> id;
			cout << "please enter "<<i+1 <<" the employee's name: " << endl;
			cin >> name;
			cout << "please enter "<<i+1 <<" the employee's department id: " << endl;
			cin >> deptId;
			cout<<"please enter the type of the employee: "<<endl;
			cout<<"1. Employee"<<endl;
			cout<<"2. Manager"<<endl;
			
			int type;
			cin>>type;
            //创建父类对象worker，指向子类对象
			worker* worker = nullptr;
            switch (type) {
            case 1:
                worker = new employee(id, name, deptId);
                break;
            case 2:
                worker = new financialManager(id, name, deptId);
                break;
            default:
                break;
            };
           
            //把上面刚创建的worker指针对象所指向的内容，存入newSpace数组
			newSpace[this->empNum + i] = worker;


        }
        //释放旧的数组指针空间，指向新的newSpace数组。
		delete[] this->workerArray;
		this->workerArray = newSpace;
        this->empNum = newSize;
        this->m_FileIsEmpty = false;
        this->save();
        cout << "the information added directly" << endl;
        system("pause");
        system("cls");
    }
    else {
        cout << "the data you input is wrong" << endl;
    }
    
}
//文件写入方法
void workerManager::save() {
    ofstream ofs;
    ofs.open(FileName, ios::out);
    
    for (int i = 0; i <this->empNum;i++) {
        ofs << this->workerArray[i]->id << " " << this->workerArray[i]->name << this->workerArray[i]->deptId<< endl;
    }
    ofs.close();
}

workerManager::~workerManager() {

}
void workerManager::exitTheSystem() {
    cout << "Exit the Program!" << endl;
    system("pause");
    exit(0);
}
int workerManager::getSum() {
    ifstream ifs;
    int id;
    string name;
    int deptId;
    int num = 0;
    ifs.open(FileName, ios::in);
    while (ifs >> id && ifs >> name && ifs >> deptId) {
        num++;
    }
    return num;

}