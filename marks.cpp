#include<bits/stdc++.h>
using namespace std;

class student
{public:
	char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
	student(char name[],int roll,char section,int math_marks,int cls){
        strcpy(this->name,name);
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;
	}
};
int main(){
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    student st1=student(name,roll,section,math_marks,cls);
    student st2=student(name,roll,section,math_marks,cls);
    student st3=student(name,roll,section,math_marks,cls);
    cin>>st1.name;
	cin>>st1.roll;
	cin>>st1.section;
	cin>>st1.math_marks;
	cin>>st1.cls;

    cin>>st2.name;
	cin>>st2.roll;
	cin>>st2.section;
	cin>>st2.math_marks;
	cin>>st2.cls;

	cin>>st3.name;
	cin>>st3.roll;
	cin>>st3.section;
	cin>>st3.math_marks;
	cin>>st3.cls;

    if(st1.math_marks>st2.math_marks && st1.math_marks>st3.math_marks){
        cout<<st1.name;
    }
    else if(st2.math_marks>st1.math_marks && st2.math_marks>st3.math_marks){
        cout<<st2.name;
    }
    else if(st3.math_marks>st1.math_marks && st3.math_marks>st2.math_marks){
        cout<<st3.name;
    }
    return 0;
}


