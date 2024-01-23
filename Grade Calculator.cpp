#include<iostream>
#include<string>
using namespace std;
int main(){
    double grades[100],weight[100], average, weightCounter=0, gradeTotal=0;
    int gradeAmount;
    cout<<"|-------------------------------------------------------------------------------------|"<<endl;
    cout<<"|-----------------------------Welcome to Grade Calculator-----------------------------|"<<endl;
    cout<<"|-------------------------------------------------------------------------------------|"<<endl;
    cout<<"How many grades would you like to enter? ";
    cin>>gradeAmount;
    for(int i = 1;i <= gradeAmount;i++){
        cout<<"Enter a grade and the percent amount it weighs below."<<endl;
        cin>>grades[i]>>weight[i];
        for(int j = 0;weight[i] > 1;j++){
            weight[i] /= 10;  
        }
        weightCounter += weight[i];
    }
    for(int i = 0;i <= gradeAmount;i++){
        gradeTotal += (grades[i]*weight[i]);
    }
    average = gradeTotal / weightCounter;
    cout<<"Your grade average is "<<average;
    
    return 0;
}