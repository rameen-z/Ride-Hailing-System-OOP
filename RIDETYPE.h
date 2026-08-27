#ifndef RIDETYPE_H
#define RIDETYPE_H

#include<iostream>
using namespace std;

class RideType{
	private: 
		string type;
	public: 
		RideType(string t="ECONOMY"){
			type=t;		
		}
		
			void setType(string t){
				if(t=="ECONOMY"|| t=="BUSINESS"|| t=="PREMIUM"){
						type=t;
				}
			else
			{
				type="ECONOMY";
				cout<<"Invalid Ride Type ! Defaulting To ECONOMY"<<endl;
			}
		
		
			}
		
		string getType(){
			return type;
		}
	
		float getPrice(){
			if(type == "ECONOMY")
			return 1000;
			
			else if (type == "BUSINESS")
			return 2000;
			
			else if(type == "PREMIUM")
			return 3000;
			
			else
			return 0;
		}
		
		void display(){
		cout<<"\n Ride Type : "<<type;
		}
};
#endif
