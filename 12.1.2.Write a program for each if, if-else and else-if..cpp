#include<iostream>
#include<cmath>
using namespace std;

int main(){
	string name;
	cout<<"Enter your name ?"<<endl;
	cin>>name;
	int total_marks,obtain_marks;
	cout<<"Enter your total marks "<<endl;
	cin>>total_marks;
	cout<<"Enter your obtain marks"<<endl;
	cin>>obtain_marks;
	double result;
	result=(double)obtain_marks/total_marks*100;
	
	if (result>= 40){
		cout<<"congrats you passed your exam !"<<endl;
		
		if (result >= 90){
     cout<<"Excellent  you got A1 grade"<<""<<"and got "<<result<<"%"<<endl;
 
  }
  else if(result>=80 && result <90){
  	cout<<"Very good you got A+ grade "<<"and got "<<result<<"%"<<endl;
  	
  }
  if (result>=70 && result<80){
  	cout<<"Good you got A  grade "<<"and got "<<result<<"%"<<endl;
  }
  else if (result>=60 && result <70){
  	cout<<"you got B grade "<<"and got "<<result<<"%"<<endl;
  }
	}
	else {
		cout<<"sorry you need to improve next year!";
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

