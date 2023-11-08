#include "STask/src/STask/STUtils.h"
#include "STask/src/STask/UserManager.h"
#include <iostream>

using namespace STask;

STask::Task x("test","test","11","22") ;
STask::UserManager* um;

int main(){
    um = STask::UserManager::inst();

    const auto& [user, err] 
        = um->login("Python","123","Fedora");


    std::cout<<"Hello PySTask "<<x.name<<'\n'<<err.text<<'\n';
}

