#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Item
{
 public:
 char name[10];
 int DOB;
 int Telephone_no;
 int code;
 bool operator==(const Item& i1)
 {
 if(code==i1.code)
 return 1;
 return 0;
 }
 bool operator<(const Item& i1)
 {
 if(code<i1.code)
 return 1;
 return 0;
 }
};
vector<Item> o1;
void print(Item &i1);
void display();
void insert();
void search();
void dlt();
bool compare(const Item &i1, const Item &i2)
{

 return i1.Telephone_no < i2.Telephone_no;
}
int main()
{
 int ch;
 do
 {
 cout<<"\n*** Menu ***";
 cout<<"\n1.Insert";
 cout<<"\n2.Display";
 cout<<"\n3.Search";
 cout<<"\n4.Sort";
 cout<<"\n5.Delete";
 cout<<"\n6.Exit";
 cout<<"\nEnter your choice:";
 cin>>ch;

 switch(ch)
 {
 case 1:
 insert();
 break;

 case 2:
 display();
 break;

 case 3:
 search();
 break;

 case 4:
 sort(o1.begin(),o1.end(),compare);
 cout<<"\n\n Sorted on Telephone_no";
 display();
 break;

 case 5:
 dlt();
 break;

 case 6:
 exit(0);
 }

 }while(ch!=7);
 return 0;
}
void insert()
{
 Item i1;
 cout<<"\nEnter  Name:";
 cin>>i1.name;
 cout<<"\nEnter  DOB:";
 cin>>i1.DOB;
 cout<<"\nEnter  Telephone_no:";
 cin>>i1.Telephone_no;
 cout<<"\nEnter  Code:";
 cin>>i1.code;
 o1.push_back(i1);
}
void display()
{
 for_each(o1.begin(),o1.end(),print);
}
void print(Item &i1)
{
 cout<<"\n";
 cout<<"\nItem Name:"<<i1.name;
 cout<<"\nItem DOB:"<<i1.DOB;
 cout<<"\nItem Telephone_no:"<<i1.Telephone_no;
 cout<<"\nItem Code:"<<i1.code;
}
void search()
{
 vector<Item>::iterator p;
 Item i1;
 cout<<"\nEnter  Code to search:";
 cin>>i1.code;
 p=find(o1.begin(),o1.end(),i1);
 if(p==o1.end())
 {
 cout<<"\nNot found.";
 }
 else
 {
 cout<<"\nFound."<<endl;
 cout<<" Name : "<<p ->name<<endl;
 cout<<" DOB : "<<p ->DOB<<endl;
 cout<<" Telephone_no : "<<p ->Telephone_no<<endl;
 cout<<" Code: "<<p ->code<<endl;
 }
}
void dlt()
{
 vector<Item>::iterator p;
 Item i1;
 cout<<"\nEnter  Code to delete:";
 cin>>i1.code;
 p=find(o1.begin(),o1.end(),i1);
 if(p==o1.end())
 {
 cout<<"\nNot found.";
 }
 else
 {
 o1.erase(p);
 cout<<"\nDeleted.";
 }
}

