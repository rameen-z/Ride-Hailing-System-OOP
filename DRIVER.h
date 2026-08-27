#ifndef DRIVER_H
#define DRIVER_H
#include "USER.h"

class Driver:public User{
	private: 
		float rating;
	public : 
		Driver():User()
		{
			rating=0;
			role="DRIVER";
		}
		
		Driver(int i,string n,bool a,string p,float r) : User(i,n,a,p,"DRIVER")
		{
			rating=r;
		}

    	void setrating(float r){
    		while(r<0 || r>5)
    	{
    		cout<<"\n Invalid Rating";
    		cout<<"\n Please enter a valid rating between 0 and 5 : ";
    		cin>>r;
		}
             	rating=r;
	   	}
	
		float getrating(){
			return rating;
		}
		
		void display(){
			cout<<"\n========DRIVER DETAILS=========";
			User::display();
			cout<<"\n Rating is : " <<rating;
		}
	
};
#endif
