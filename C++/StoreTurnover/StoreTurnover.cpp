#include <iostream>
#include <string>
using namespace std;

class Magazin{
    public:
    int day;
    int sales;
    float turnover;
    float avggrade;

void Read(){
    cout <<"Den: ";
    cin >> day;
    cout << "Sales: ";
    cin >> sales;
    cout << "Turnover: ";
    cin >> turnover;
}
void Print()
{
    cout << "\t  " << day << "\t\t\t\t\t" << sales << "\t\t\t\t" << turnover <<endl;
    cout << endl;
}
};


int main(){
    int n,month;
    float avarage=0;
    do{
        cout <<"Month: ";
        cin >> month;
    } while(month<1||month>12);
    do{
        cout <<"For how many days:";
        cin >> n;
    } while(n<1 || n>31);
    Magazin D[n];
    for(int i=0;i<n;i++){
        D[i].Read();
    }
    cout << "==============================================================================================" <<endl;
    cout << "Month " << month <<endl<< endl <<"\t" <<"Day"<< "\t\t\t\t" << "Sales" << "\t\t\t\t" <<"  Turnover" << endl;
    cout << endl;
    for(int i=0;i<n;i++){
        D[i].Print();
    }
    cout << endl;
    for (int i=0;i<n;i++){
        avarage+=D[i].turnover;
    }
    avarage=avarage/n;
    cout << "==============================================================================================" <<endl;
    cout << endl << "Average turnover: " << avarage << endl;
}
