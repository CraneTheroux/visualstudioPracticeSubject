#include<iostream>
#include<algorithm>
#include<queue>
#include<fstream>
#include<ctime>
#include<random>
#include<string>
int main(){
    
    std::ofstream file("test.txt",std::ios::out);
    if(!file.is_open()){
        std::cout<<"can't open the file";
        return 1;
    }else if(file.is_open()){
        std::cout<<"file has opened successfully"<<std::endl;
        file<<"hello crane!"<<std::endl;
    }
    file.close();
    
    std::ifstream file1("test.txt",std::ios::in);
     if(!file1.is_open()){
        std::cout<<"can't open the file for reading";
        return 1;
    }
    std::string line;
    while(std::getline(file1,line)){
        std::cout<<line<<std::endl;
    }
    
}