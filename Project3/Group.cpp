#include <iostream>  
using namespace std;

class Group {
private:
    char* groupDescription; 

public:
   
    Group(const string& description) {
        groupDescription = new char[description.length() + 1];
        strcpy(groupDescription, description.c_str());
    }
 
    const char* getGroupDescription() const {
        return groupDescription;
    }
  
    void setGroupDescription(const string& description) {
        delete[] groupDescription;
        groupDescription = new char[description.length() + 1];
        strcpy(groupDescription, description.c_str());
    }
 
    ~Group() {
        delete[] groupDescription;
    }
};