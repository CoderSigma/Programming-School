#include<iostream>
#include<string>

using namespace std;

int main(){
    int firstGrade,secondGrade,thirdGrade,fourthGrade,fifthGrade,result,ave;
    string name;
    
    cout<<"Enter professor's name:";
    cin>>name;
    
    cout<<"Enter 5 IT Subject marks:\n";
    cin>>firstGrade>>secondGrade>>thirdGrade>>fourthGrade>>fifthGrade;
    
    result = firstGrade + secondGrade + thirdGrade + fourthGrade + fifthGrade;
    
    ave = result / 5;
    
    cout<<"Sum of 5 IT Subjects is = "<<result;
    cout<<"\nIT Professor "<<name<<endl;
    
    if (ave >= 90){
        cout<<"Grade A";
    }
    else if(ave >= 75){
        cout<<"Grade B";
        
    }
    else if(ave >= 60){
        cout<<"Grade C";
        
    }
    else{
        cout<<"Failed";
    }
}