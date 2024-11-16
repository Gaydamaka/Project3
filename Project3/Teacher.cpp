#include <iostream>  
using namespace std;

class Teacher {
private:
    char* specialization; 

public:
 
    Teacher(const string& spec) {
        specialization = new char[spec.length() + 1];
        strcpy(specialization, spec.c_str());
    } 
    const char* getSpecialization() const {
        return specialization;
    } 
    void setSpecialization(const string& spec) {
        delete[] specialization;
        specialization = new char[spec.length() + 1];
        strcpy(specialization, spec.c_str());
    } 
    ~Teacher() {
        delete[] specialization;
    }
};