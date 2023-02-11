#include<iostream>
#include<string>

using namespace std;

int main(){
    string name,course;
    char let;
    float progGrade,objProg,net;
    
    cout<<"Enter your name:";
    cin>>name;
    
    cout<<"Enter your course:";
    cin>>course;
    
    cout<<"Enter the last letter of your username:";
    cin>>let;
    
    
    cout<<"Enter the grade for Programming II:";
    cin>>progGrade;
    
    cout<<"Enter the Object Oriented Programming:";
    cin>>objProg;
     
    cout<<"Enter the grade for Networking:";
    cin>>net;
    
    if(progGrade >= objProg && progGrade >= net){
        cout<<"The higher number is "<<progGrade;
    }
    else if(objProg >= progGrade && objProg >= net){
        cout<<"The higher number is "<<objProg;
    }
    else if(net >= objProg && net >= progGrade){
        cout<<"The higher number is "<<net;
    }
    
    
}