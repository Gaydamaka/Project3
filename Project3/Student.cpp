#include <iostream>  
using namespace std;

class Student {
private:
    char* researchTopic;  

public:  

    Student(const string& topic) {
        researchTopic = new char[topic.length() + 1];
        strcpy(researchTopic, topic.c_str());
    }
    const char* getResearchTopic() const {
        return researchTopic;
    } 
    void setResearchTopic(const string& topic) {
        delete[] researchTopic;
        researchTopic = new char[topic.length() + 1];
        strcpy(researchTopic, topic.c_str());
    }  
    ~Student() {
        delete[] researchTopic;
    }
};