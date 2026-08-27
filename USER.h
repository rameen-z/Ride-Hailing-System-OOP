#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>
using namespace std;

class User{
protected : 
	int id;
	string name;
	bool availability;
	string phone;
	string role;
public : 
    User(){
    	id=0;
    	name=" ";
    	availability=true;
    	phone=" ";
    	role=" ";
	}
	User(int i,string n,bool a,string p,string r){
		id=i;
		name=n;
		availability=a;
		phone=p;
		role=r;
	}
	void setid(int i){
		id=i;
	}
	int getid(){
		return id;
	}
	void setname(string n){
		name=n;
		
	}
	string getname(){
		return name;
	}
	void setavailability(bool a){
		availability=a;
	}
	bool getavailability(){
		return availability;
		
	}
	void setphone(string p){
	    phone=p;
	}
	string getphone(){
		return phone;
	}
	void setrole(string r){
		role=r;
	}
	string getrole(){
		return role;
	}
	virtual void display(){
		
		cout<<"\n ID : "<<id;
		cout<<"\n Name : "<<name;
		cout<<"\n Availability Status : ";
		if(availability){
			cout<<" Available";
		}
		else
		cout<<" Not available";
		cout<<"\n Phone : "<<phone;
		cout<<"\n Role  : "<<role;
	}
};



#endif
