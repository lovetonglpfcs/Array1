#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void ListStudent(string studentname[100],int studentscore[100],int);
char Calgrade(int);
int main()
{
	int numlist,studentscore[100];
	string studentname[100];
	cout << "Input Number of student : ";
	cin >> numlist;
	for(int n=0;n<numlist;n++)
	{
		cout << "Input Name : ";
		cin >> studentname[n];
		cout << "Input score "<< n+1 <<" : ";
		cin >> studentscore[n];
		cout << endl;
	}
	ListStudent(studentname,studentscore,numlist);
	return 0;

}

void ListStudent(string studentname[100],int studentscore[100],int num)
{
	for(int n=0;n<num;n++)
	{
		cout << "Student Name : " << studentname[n] <<"\t";
		cout << "Your grade is " << Calgrade(studentscore[n]) << endl;
	}
}

char Calgrade(int score)
{
	if(score >= 80){
		return('A');
	}else if(score >= 70){
		return('B');
	}else if(score >= 60){
		return('C');
	}else if(score >= 50){
		return('D');
	}else{
		return('F');
	}
}