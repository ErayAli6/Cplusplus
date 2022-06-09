#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    int number;
    string name;
    int grades[5];
    float avggrade;

void Read(){
    cout <<"Faculty number:";
    cin >> number;
    cout <<"Name:";
    cin >> name;
    cout << "Grades:";
    for(int i=0;i<5;i++){
        cin >> grades[i];
        this->avggrade+=grades[i];
    }
    this->avggrade/=5;
}

void Print()
{
    cout << "\t  " << number<< "\t\t\t\t\t" << name << "\t\t\t\t";
    for (int g : grades) {
        cout << g << "  ";
    }
    cout << endl;
}
};

int main(){
    int n;
    float avarage=0;
    do{
        cout <<"Number of students:";
        cin >> n;
    } while(n<1);
    Student S[n];
    for(int i=0;i<n;i++){
        S[i].Read();
    }
    cout << "==============================================================================================" <<endl;
    cout << "\t" <<"Fac number"<< "\t\t\t\t" << "Name" << "\t\t\t\t" <<"  Grades" << endl;
    cout << endl;
    for(int i=0;i<n;i++){
        S[i].Print();
    }
    for (int i=0;i<n;i++){
        avarage+=S[i].avggrade;
    }
    avarage=avarage/n;
    cout << "==============================================================================================" <<endl;
    cout << endl << "Average grades: " << avarage << endl;
}
