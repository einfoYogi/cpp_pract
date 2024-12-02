#include <iostream>
#include "lib.h"

using namespace std;
Car::Car(int in_speed,int in_fuel){
	speed=in_speed;
	fuel=in_fuel;
}

void Car::Accelerate(int in_speed){
	speed+=in_speed;
	fuel-=in_speed;
}
void Car::Brake(){
	speed-=5;
}
void Car::Dashboard(){
	cout<<"Speed: "<<speed<<endl<<"Fuel:"<<fuel<<endl;
}
void Car::FillFuel(int in_fuel){
	fuel+=in_fuel;
}
Car::~Car(){
	cout<<"CAr ran away"<<endl;
}

