#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s)
        : Person(n, a) {
        subject = s;
    }

    void display() override {
        cout << "Teacher Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

class ResearchScholar : public Person {
private:
    string researchArea;

public:
    ResearchScholar(string n, int a, string r)
        : Person(n, a) {
        researchArea = r;
    }

    void display() override {
        cout << "Scholar Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

template <class T>
class RecordManager {
private:
    T record;

public:
    RecordManager(T r) : record(r) {}

    void display() {
        record.display();
    }
};

int main() {

    Teacher t("Mr. Ahmed", 40, "C++");

    ResearchScholar r("Rahul", 25, "Artificial Intelligence");

    RecordManager<Teacher> teacherRecord(t);
    RecordManager<ResearchScholar> scholarRecord(r);

    cout << "Teacher Record" << endl;
    teacherRecord.display();

    cout << "\nResearch Scholar Record" << endl;
    scholarRecord.display();

    return 0;
}