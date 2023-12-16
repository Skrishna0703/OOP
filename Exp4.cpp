#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	char Name[20];
	int ID;
	double salary;
public:
	 void accept(){
	 	cin.ignore();
		 cout<<"\n Enter Name:";
		 cin.getline(Name,20);
		 cout<<"Enter ID:";
		 cin>>ID;
		 cout<<"Enter salary:";
		 cin>>salary;
	}
	void display(){
		cout<<"\n Name:"<<Name;
		cout<<"\n ID:"<<ID;
		cout<<"\n Salary:"<<salary<<endl;
	}
};
int main()
{
	Employee o[5];
	fstream f;
	int i,n;
	f.open("abc.txt",ios::out ); 
	cout<<"\n How many employee information do you need to store =";
	cin>>n;
	cout<<"\n Enter information of employee in this format(NAME/ID/Salary):";
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter information of Employee"<<i+1;
		o[i].accept();
		f.write((char*)&o[i],sizeof o[i]);
	}
	f.close();
	f.open("abc.txt",ios::in );
	cout<<"\n information of employee is as follows:";
	for(i=0;i<n;i++)
	{
		f.read((char*)&o[i],sizeof o[i]);
		o[i].display();
	}
	f.close();
	return 0;
}
