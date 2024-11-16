#include <iostream>  
using namespace std;

class Subject {
private:
    char* additionalMaterials;  

public:
   
    Subject(const string& materials) {
        additionalMaterials = new char[materials.length() + 1];
        strcpy(additionalMaterials, materials.c_str());
    }

    const char* getAdditionalMaterials() const {
        return additionalMaterials;
    }
 
    void setAdditionalMaterials(const string& materials) {
        delete[] additionalMaterials;
        additionalMaterials = new char[materials.length() + 1];
        strcpy(additionalMaterials, materials.c_str());
    }

    ~Subject() {
        delete[] additionalMaterials;
    }
};