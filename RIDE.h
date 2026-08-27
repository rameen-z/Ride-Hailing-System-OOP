#ifndef RIDE_H
#define RIDE_H
#include<iostream>
#include"RIDETYPE.h"
using namespace std;

class Ride{
	private:
		string pickup;
		string destination;
		double distance;
		double fare;
		RideType type;
		
		public:
			Ride(){
				pickup=" ";
				destination=" ";
				distance=0;
				fare=0;
				type=RideType("ECONOMY");
			}
			
			void setRide(string p,string d,double dis,string t){
				pickup=p;
				destination=d;
				distance=dis;
				type.setType(t);
			}
			
			void calculateFare(){
				fare=distance*type.getPrice();	
			}
			
			double getFare(){
				return fare;
			}
			
			void display(){
				cout<<"\n======RIDE DETAILS=======";
				cout<<"\n Pickup : "<<pickup;
				cout<<"\n Destination : "<<destination;
				cout<<"\n Distance  : "<<distance;
				type.display();
				cout<<"\n Fare : "<<fare;	
			}
			
		
		
};
#endif
