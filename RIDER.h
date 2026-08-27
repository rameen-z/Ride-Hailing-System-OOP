#ifndef RIDER_H
#define RIDER_H
#include "USER.h"


class Rider:public User{
	private: 
		int rideC;
	public: 
		Rider():User(){
			rideC=0;
			role="RIDER";
		}
		
		Rider(int i,string n,bool a,string p,int c):User(i,n,a,p,"RIDER"){
			rideC=c;
		}
	
    	void addridecount(){
    		rideC++;
		}
		
		int getridecount(){
			return rideC;
		}
		
		void display(){
			cout<<"\n========RIDER DETAILS=========";
			User::display();
			cout<<"\n Ride Count is : "<<rideC;
		}
	
};
#endif
