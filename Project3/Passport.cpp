#include <iostream>  
using namespace std;

class Passport {
private:
    char* additionalInfo; 

public: 

    Passport(const string& info) {
        additionalInfo = new char[info.length() + 1];
        strcpy(additionalInfo, info.c_str());
    }
  
    const char* getAdditionalInfo() const {
        return additionalInfo;
    }

    void setAdditionalInfo(const string& info) {
        delete[] additionalInfo;
        additionalInfo = new char[info.length() + 1];
        strcpy(additionalInfo, info.c_str());
    }

    ~Passport() {
        delete[] additionalInfo;
    }
};