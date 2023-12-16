#include<iostream>
#include<string>
using namespace std;
class student
{
private:
 string name,dob,bloodgrp,addr,yearclass,mob;
 int div;
 int *rollno;
public:
 friend class faculty;
 student()
 { rollno = new int;
 *rollno = div =-1;
 name = bloodgrp=dob=addr=yearclass=mob="";
 }
~student()
{
delete rollno; //deallocation
}
void adddata()
{
 cout<<"\n enter the student information:";
 cin.ignore();
 getline(cin,name);
 cout<<"enter the Rollno: ";
 cin>>*rollno;
 cout<< "enter divison (1/2/3/4/5):";
 cin>>div;
 cout<<"enter the birth date: "<<endl;
 cin>>dob;
 cout<<"enter the blood group: ";
 cin>>bloodgrp;
 cout<<"enter the phone number: ";
 cin>>mob;
 cout<<"enter the address: ";
 cin>>addr;
}
void display()
{
 cout<<"\n-----------------------------------";
 cout<<"\n Name :"<<name;
 cout<<"\nRoll No :"<< *rollno;
 cout<<"\nYear(SE/TE/BE):"<<yearclass;
 cout<<"\nDiv(1/2/3/4/5):"<<div;
 cout<<"\nBlood Group :"<<dob;
 cout<<"\nMobile Number :"<<bloodgrp;
 cout<<"\nAddress :"<<addr;
 cout<<"\n------------------------------------";
}
 static void header()
 {
 cout<<"\n * * * Student Information System * * *";
 }
};
class faculty
{
private:
 int id;
public:
 faculty()
 {
 id = 000;
 }
 faculty(const faculty &f1)
 {
 id = f1.id;
 }
 void fdisplay(student &obj,int f_d)
 {
 try
 {
 if (obj.div == f_d)
 obj.display();
 else
 throw( obj.div);
 }
 catch( int x)
 {
 cout<<"\n Invalid Divison....";
 }
 }
};
int main() {
 student st[5];
 faculty f;
 int ch=0,count=0;
 do
 {
 cout<<"\n * * * Student information system *";
 cout<<"\n * * * Menu * * *";
 cout<<"\n 1.Add Information ";
 cout<<"\n 2. Display Information ";
 cout<<"\n 3. Faculty wise Information";
 cout<<"\n 4. Exit ";
 cout<<"\n Enter choice : ";
 cin>>ch;
 switch(ch)
 {
 case 1: st[count].adddata();
 count++;
 break;
 case 2:
 for (int j=0;j<count;j++)
 {
 student::header();
 st[j].display();
 }
 break;
 case 3:
 int f_div;
 cout<<"\n enter Divison of Faculty: ";
 cin>> f_div;
 for ( int j=0;j<count;j++)
 {
 cout<<"\n * * * Student Information System (Faculty RAS) * * *";
 f.fdisplay(st[j],f_div);
 }
 break;
 case 4:
 exit(0);
 }
 }while ( ch!= 4);
 return 0;
 }
