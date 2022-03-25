#include <iostream>
#include <limits.h> //INT_MAX etc.
#include <string> //stoi

extern int e; //global, public.
//static for memory allocation until program ends

int main() {
	std::cout << "Hello world" << std::endl;
	std::string name;
	//std::cin >> name;
	//std::cout << "Name is" << name << std::endl;



	//DATA TYPE
		//TEXT
	char c = 'a'; //1 byte, 8bits, 255
	std::string hello = "Hello World"; //24bytes, 192
	std::string num="13";
	//NUMBER
	int i = 10, ii=12;
	int intstring = std::stoi(num);
	std::cout << "Num is " << intstring << std::endl;
	short int s=20;
	std::cout << "Integer (int) : " << sizeof(int) <<std::endl; //4 bytes, 32 bits. 4294967295
	std::cout << "Short (short) : " << sizeof(short) <<std::endl; //2 bytes, 16 bits. 65535
	std::cout << "Float: " << sizeof(float) <<std::endl; //4 bytes, 32 bits. 4294967295, 7 digits
	std::cout << "Double: " << sizeof(double) <<std::endl; //8 bytes, 64 bits. FFFF FFFF FFFF FFFF, 15 digits
	unsigned short unsignedshort = 65535 ;//0<->6535
	signed short signedshort = 32767;// -32767 <-> 32767
	
	std::cout << INT_MAX << std::endl; //signed
	std::cout << UINT_MAX << std::endl; //unsigned


	//BOOLEAN
	//1 byte
	//true or false
	bool truebool = true; //1
	bool falsebool = false; //0
	
	//Operators
	//Arithmetics
	std::cout << i + ii - 2 / 5 * 1 << std::endl;
	std::cout << 10 % 4  << std::endl; //remainder = 2

	//Assignment
	//= equals
	//+= *= -= /= you know
	//a++ a+=1 increase after
	//++a first increase 
	//--a,a-- ^


	//Comparison
	//== match
	//!= is not
	// < > <= >=
	//returns boolean

	//Logical Operators
	//&& and || or ! not

	//Typecasting 
	// using (int) variable will convert to integer
	float typef = 13.13;
	std::cout << (int) typef + 13 << std::endl;


	if (i>10){
		std::cout << "Greater than 10" << std::endl;
	} else if (i=10) {
		std::cout << "Is 10" << std::endl;
	}
	else{
		std::cout << "Not greater than 10" << std::endl;
	}

	while (i > 0){
		std::cout << i-- << std::endl;
	}
	std::cout << "Value changed to " << i << std::endl;

	for (int x=0; x<10;x++) {
		std::cout << x << std::endl;
	}
	





	std::cin.get();
	return 0;
}



