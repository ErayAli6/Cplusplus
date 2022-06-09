#include <iostream>
#include <string>
using namespace std;

class Workers{
    public:
    string name;
    int workingDays;
    float works;

void Read(){
    cout <<"Name: ";
    cin >> name;
    do{
    cout << "Number of working days: ";
    cin >> workingDays;
    }while(workingDays<0);
    do{
    cout << "Percentage of the month's performance [0;200]: ";
    cin >> works;
    } while (works<0 || works>200);
}

void Print()
{
    cout << "\t  " << name << "\t\t\t\t\t" << workingDays << "\t\t\t\t" << works <<endl;
    cout << endl;
}
};


int main(){
    int n;
    float avarage=0;
    do{
        cout <<"Number of workers:";
        cin >> n;
    } while(n<0 || n>=50);
    Workers N[n];
    for(int i=0;i<n;i++){
        N[i].Read();
    }
    cout << "===========================================================================================================" <<endl;
    cout << "\t" <<"Name"<< "\t\t\t\t" << "Number of working days" << "\t\t\t" <<"Percentage performance of the month" << endl;
    cout << endl;
    for(int i=0;i<n;i++){
        N[i].Print();
    }
    for (int i=0;i<n;i++){
        avarage+=N[i].works;
    }
    avarage=avarage/n;
    cout << "==============================================================================================" <<endl;
    cout << endl << "Average percentage performance for the month: " << avarage << endl;
}
