#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
// Name of Programe :
double bal=1000;
double dep;
double with;
double trans;
int pin;
char name[20];
char ifsc[5];
class atm 
{
public :
	void deposite(){
		
		cout<<" Enter the Amount To Depoiste "<<endl;
		cin>>dep;
		cout<<"Deposited Balance is "<<dep<<endl;
		bal=bal+dep;
		
		cout<<" Balance SucessFully Deposited In Your Account "<<endl;
		
}
void withdrwal(){
char choice;
cout<<" Enter the Amount To Withdraw"<<endl;
cin>>with;
if(bal>with){
	cout<<"Are you sure to Withdrwal the Amount"<<with;
if (choice=='Y'||'y'){
	cout<<with<<"Withdrwal SuceesFully"<<endl;
	bal=bal-with;
	cout<<"Total Balance is"<<bal;
}
else{
cout<<"Rediredirecting To Main Menu"<<endl;

}
}

}
void transfer(){
	cout<<"Enter the Amount To transfer"<<endl;
	cin>>trans;
	if(trans<=bal){
		cout<<"Influecient Money"<<endl;
		
	}
	else {
		cout<<trans<< " "<<"Sent SuccessFully"<<endl;
		
	}
	
}
void checkbal(){
//system("cls");
cout<<"Enter the Pin\n";
cin>>pin;
cout<<"Enter the Name\n";
cin>>name;



if (pin==123){
//fflush(stdin);	
cout<<"Name: "<<name;
//cout<<"IFSC: "<<ifsc;
cout<<"\nYour Account Banalce is :$"<<bal<<endl;
}	
else{
	cout<<"Wrong Pin\n";
}	
	

}
}a;

int main()
{
	char choice;
	int ch;
	cout<<"Welcome To State Bank Of India\n";
	
while(1){
//system("cls");
	cout<<endl;

	cout<<"Do you Want to Continue [Y-N]"<<endl;
cin>>choice;
if (ch=='Y'||'y')
{
	system("cls");
	cout<<"Press 1 to Check Balance\n";
	cout<<"Press 2 to Deposite Balance\n";
	cout<<"Press 3 to Withdraw Balance\n";
	cout<<"Press 4 to transfer Balance\n";
 cout<<"Press 5 to close the program\n";
cout<<"Enter the Choice\n";
cin>>ch;
system("cls");
		

switch(ch){
	
	case 1:a.checkbal();
	break;
case 2:a.deposite();					
break;
case 3:a.withdrwal();
break;
case 4:a.transfer();
break;
case 5: exit(0);
break;
default :cout<<"Wrong Choice"<<endl;
}
}

else{
	cout<<"Are you Sure Want to close"<<endl;
	cin>>choice;
	if(choice=='Y'||'y'){
		exit(0);
	}
	else{
		a.checkbal();
	}
}



}
return 0;
}


