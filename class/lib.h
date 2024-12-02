#pragma once
class Car{
	private:
		int fuel;
		int speed;
	public:
		Car(int in_speed,int in_fuel);
		~Car();
		void Accelerate(int in_speed);
		void FillFuel(int in_fuel);
		void Brake();
		void Dashboard();
};
