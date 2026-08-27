#include<iostream>
#include<fstream>

#include "RIDER.h"
#include "DRIVER.h"
#include "RIDE.h"
#include "RIDETYPE.h"
#include "DISTANCECALCULATOR.h"

using namespace std;

int main(){

    Rider rider;
    Driver driver;
    Ride ride;

    int roleChoice;

    cout<<"\n======SELECT USER TYPE======";
    cout<<"\n1. Rider";
    cout<<"\n2. Driver";
    cout<<"\n============================";
    cout <<"\nEnter choice: ";
    cin >>roleChoice;

    if(roleChoice==1){
        int choice;
        
        int id;
        string name, phone;
		cout<<"\n=====RIDER DETAILS=====";
        cout<<"\nEnter Rider ID: ";
        cin>>id;

        cout<<"Enter Rider Name: ";
        cin>>name;

        cout << "Enter Rider Phone: ";
        cin>>phone;
		
		
        rider.setid(id);
        rider.setname(name);
        rider.setphone(phone);
        
		
        cout << "\nRider Added Successfully!";
        cout<<"\n=======================";
       
        cout<<"\n ";

        do{
            cout<<"\n===== RIDER MENU =====";
            cout<<"\n1. Book Ride";
            cout<<"\n2. Display Rider Details";
            cout<<"\n3. Save Rider Data";
            cout<<"\n4. Exit";
            cout<<"\n========================";
            cout<<"\nEnter choice: ";
            cin>>choice;
            

            switch(choice){

                case 1: {
                    string pickup, destination, type;
                    
                    float x, y;
                    cout<<"\n========RIDE DETAILS======";
                    cout<<"\nEnter Pickup Point: ";
                    cin>>pickup;

                    cout<<"Enter Destination: ";
                    cin>>destination;

                    cout<<"Enter Starting Number: ";
                    cin>>x;

                    cout<<"Enter Ending Number: ";
                    cin>>y;

                    DistanceCalculator<float> d;
                    float distance= d.calculateDistance(x, y);
					cout<<"====================="<<endl;
                    cout<<"Distance: "<<distance<<endl;
					cout<<"====================="<<endl;
                    cout<<"\nEnter Ride Type (ECONOMY/BUSINESS/PREMIUM): ";
                    cin>>type;
                    
					for(int i = 0; i < type.length(); i++){
    				type[i] = toupper(type[i]);
					}
                    ride.setRide(pickup, destination, distance, type);
                    ride.calculateFare();
                    rider.addridecount();
                   
					cout<<"Ride Fare: "<<ride.getFare()<<endl;
					
                    cout<<"\nRide Booked Successfully!";
                    cout<<" "<<endl;
                    break;
                }

                case 2:
                    rider.display();
                    
                    cout<<"\n=============================="<<endl;
                    cout<<" "<<endl;
                    break;

                case 3:{
                    ofstream fout("rider.txt");

                    if(fout){
                        fout<<rider.getid()<<endl;
                        fout<<rider.getname()<<endl;
                        fout<<rider.getphone()<<endl;
                        fout<<rider.getridecount()<<endl;

                        cout<<"\nRider Data Saved!";
                    }
					
					else{
                        cout<<"\nError saving file!";
                    }

                    fout.close();
                    break;
                }

                case 4:
                    cout<<"\nExiting Rider Menu...";
                    break;

                default:
                    cout<<"\nInvalid Choice!";
            }

        } while(choice!=4);
    }

    else if(roleChoice== 2){
      
        int choice;
        
        int id;
        string name, phone;
        float rating;
		cout<<"\n=====DRIVER DETAILS=====";
        cout<<"\nEnter Driver ID: ";
        cin>>id;

        cout<<"Enter Driver Name: ";
        cin>>name;

        cout<<"Enter Driver Phone: ";
        cin>>phone;

        cout<<"Enter Driver Rating: ";
        cin>>rating;

        driver.setid(id);
        driver.setname(name);
        driver.setphone(phone);
    	driver.setavailability(true);
        driver.setrating(rating);

        cout<<"\nDriver Added Successfully!";
        cout<<"\n=======================";
		cout<<"\n";
		
        do {
            cout<<"\n\n===== DRIVER MENU =====";
            cout<<"\n1. Display Driver Details";
            cout<<"\n2. Save Driver Data";
            cout<<"\n3. Exit";
            cout<<"\n=========================";
            cout<<"\nEnter choice: ";
            cin>>choice;
			
            switch(choice){

                case 1:
                    driver.display();
                    cout<<"\n===============================";
                    break;

                case 2:{
                    ofstream fout("driver.txt");

                    if (fout) {
                        fout<<driver.getid()<<endl;
                        fout<<driver.getname()<<endl;
                        fout<<driver.getphone()<<endl;
                        fout<<driver.getrating()<<endl;

                        cout<<"\nDriver Data Saved!";
                    }
					
					else{
                        cout<<"\nError saving file!";
                    }

                    fout.close();
                    break;
                }

                case 3:
                    cout << "\nExiting Driver Menu...";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

        } while(choice!=3);
    }

    else {
        cout << "\nInvalid Role Selected!";
    }

    return 0;
}
