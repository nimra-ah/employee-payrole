#include <iostream>
using namespace std;

struct employee{
    int id;
    string name;
    long double salary;
    string dep;
    double tot_hours;
};
// Function prototypes
void input_emp(employee emp1[], int size);
void output_emp(employee emp1[], int size);
int overtime_hours(employee emp1[], int size);
double bonus(employee emp1[], int size);
double totalpay(employee emp1[], int size);

//main function
int main(){
    int size=1;
    employee emp1[size];
    cout<<"Enter employee details"<<endl;
    input_emp(emp1,size);
    output_emp(emp1, size);
    return 0;
}
// Function definitions
void input_emp(employee emp1[], int size){
    for(int i=0; i<size; i++){
    cout<<"enter employee ID"<<endl;
    cin>>emp1[i].id;
    cout<<"enter employee name"<<endl;
    cin>>emp1[i].name;
    cout<<"enter employee salary"<<endl;
    cin>>emp1[i].salary;
    cout<<"enter employee dep"<<endl;
    cin>>emp1[i].dep;
    cout<<"enter employee Total working hours in a month"<<endl;
    cin>>emp1[i].tot_hours;
    }
}

void output_emp(employee emp1[], int size){
    for(int i=0; i<size; i++){
    cout<<"employee id# "<<emp1[i].id<<endl;
    cout<<"employee name: "<<emp1[i].name<<endl;
    cout<<"employee salary: "<<emp1[i].salary<<endl;
    cout<<"employee dep: "<<emp1[i].dep<<endl;
    cout<<"employee Total working hours in a month: "<<emp1[i].tot_hours<<endl;
    cout<<"overtime is "<<overtime_hours(emp1,size)<<" hours"<<endl;
    cout<<"the bonus acc to overtime hours is: "<<bonus(emp1,size)<<endl;
    cout<<"totalpay is: "<<totalpay(emp1,size)<<endl;
    }
}

int overtime_hours(employee emp1[], int size){
    int one=0;
    for(int i=0; i<size; i++){
    if(emp1[i].tot_hours > 170){
        one = emp1[i].tot_hours - 170;
    }else{
        one = 0;
    }
    }
    return one;
}
double bonus(employee emp1[], int size){
    double one;
    one = overtime_hours(emp1,size)*20;
    return one;
}
double totalpay(employee emp1[], int size){
    double one;
    for(int i=0; i<size; i++){
    one = emp1[i].salary+(bonus(emp1,size));
    }
    return one;
}