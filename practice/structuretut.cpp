#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct stu_detail{
    int roll;
    char name[30];
    int marks;
};


stu_detail* readDetails(stu_detail  *stud,int n){
        stud =(stu_detail*)malloc(n*sizeof(stu_detail));
        for(int i=0;i<n;i++){
            int roll;
            char name[30];
            int marks;
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Roll No.:";
            cin>>roll;
            cout<<"Enter Marks:";
            cin>>marks;
            (stud+i)->roll=roll;
            strcpy((stud+i)->name,name);
            (stud+i)->marks=marks;

        }
        return stud;
}
void printDetails(stu_detail *stud,int n){
        cout<<"\nThe recorded values..\n";
        cout<<"\n";
        for(int i=0;i<n;i++){
            cout<<"Name:"<<stud[i].name;
            cout<<"\n";
            cout<<"Roll Number:"<<stud[i].roll;
            cout<<"\n";
            cout<<"Marks:"<<stud[i].marks;
            cout<<"\n\n";
        }

}


int main(){
    stu_detail *stud;
    int n=2;
    stud=readDetails(stud,n);
    system("cls");
    printDetails(stud,n);

    return 0;
}
