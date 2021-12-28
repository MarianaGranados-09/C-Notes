#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;
/*
int suma(int num, int num2) {
	int sumanum;
	sumanum = num+num2;
	return sumanum;
}
int main() {
	int num1,num2,sumanum;
	cout << "Ingrese un numero: " << endl;
	cin >> num1;
	cout << "Ingrese un numero: " << endl;
	cin >> num2;
	sumanum = suma(num1, num2);
	cout << "La suma es: " << sumanum << endl;
}

int main() {
	int i = 190;
	int size = sizeof(i);
	printf("El tamano de i es %i", size);
}
int main() {
	int mayor = 0;
	int numeros[10] = { 1,4,2,92,19,3,83,2,11,12 };
	for (int i = 0; i < 10; i++) {
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
		else {
			mayor = mayor;
		}
		cout << mayor << endl;
	}
	cout << "El numero mayor del arreglo es: " << mayor << endl;
	cout << "EL tamano del arreglo es: " << sizeof(numeros) / sizeof(mayor) << endl;
}
int main() {
	char nombre;
	cout << "Ingresa tu nombre: " << endl;
	cin >> nombre;
	switch (nombre) {
	case 'A': {
		cout << "Hola Alfredo" << endl;
	}break;
	case 'M': {
		cout << "Hola Miguel" << endl;
	}break;
	default: {
		cout << "Hola Usuario" << endl;
	}
	}
}
struct libros {
	string titulo;
	int paginas;
	char clasificacion;
};
int main() {
	//Struct: array of elements of potentially different types
	//Each element is called a member
	libros libro1;
	libro1.paginas = 120;
	cout << "El numero de paginas del libro 1 es " << libro1.paginas << endl; 
	return 0;
}

//Unions
//The union is a cousin of the POD(struct) that puts all of its memebers in the same place

//In C++, you achieve encapsulation by adding
//methods and access controls to class definitions

//Methods
//Methods are member functions, they create explicit connection among a class
//, its data members and some code. 

struct ClockOfTheLongNow {
	//Method
	void add_year() {
		year++;
	}
	int year; //member
};

int main() {
	ClockOfTheLongNow clock;
	clock.year = 2018;
	clock.add_year();
	cout << clock.year << endl;
	clock.add_year();
	cout << clock.year << endl;
}
//Access controls
//restrict class-member access.
//Public-Private are two major access controls

//Anyone can access a public member, but only a class can access
//its private members
//All struct members are public by default

struct ClockYear {
	//Added two methods to ClockYear:
	//a setter and getter for year
	void addYear() {
		year++;
	}
	//Rather than allowing a user of ClockYear to modify year directly
	//you set the year with set_year. (never less than 2019)
	bool set_year(int new_year) {
		if (new_year < 2019)
			return false;
		year = new_year;
		return true; 
	}
	//To obtain the value of year, the user calls get_year

	int get_year() {
		return year;
	}
	//Here we use access control to label private to prohibit consumers from accessing year.
	//Now, users can access year only from within ClockYear.
private:
	int year;
};

//Class
//We can replace the struct keyword with the class keyword, which declares members private by default.
//Aside from access control, classes declared with the struct and class keywords are the same. 

//After encapsulating year, you must now use methods to interact with ClockYear.

int main() {
	ClockYear clock1;
	if (!clock1.set_year(2018)) { //will fail; 2018<2019
		clock1.set_year(2019);
	}
	else {
		clock1.addYear();
		printf("year: %i", clock1.get_year());
	}
}

//Constructors initialize objects and enforce class invariants from the very beginning
//of an object's life. They are special methods with special declarations. Constructor declarations
//dont state a return type, and their name matches the class's name. 

struct clocknow {
	clocknow() {
		year = 2019;
	}
private:
	int year;
};

//Initialization
/* Object initialization is how you bring objects to life
* Fundamental Type to Zero
* There are four ways to do so:
* int a = 0;
* int b{};
* int c = {};
* int d;
* 
* Arbitrary value:
* int e=42;
* int f{42};
* int g={42};
* int h(42);
*/

//Initializing PODs
/*
struct PodStruct {
	int a;
	string b;
	bool c;
};
int main() {
	PodStruct pod1{}; //All fields zeroed
	PodStruct pod2{ 23,"Hola", true };
	cout << pod2.b << endl;
}*/

//The destructor
/*
* An objects destructor is its cleanup function, the destructor is invoked
* before an object is destroyed
*/

//Pointers are the fundamental mechanism used to refer to memory
//addresses. Pointers encode both pieces of information required to interact
//with another object--that is, the objects address and the objects type
/*
int main() {
	int* myPointer;
	printf("The value of myPointer is %p", myPointer);
	return 0;
}*/
//Deferencing: given a pointer, you can obtain the object residing at
//the corresponding address


//void pointers and byte pointers

//Addressing Variables
//& "points to"

/*
int main() {
	int get{};
	cout << "get: " << get << endl;
	int* get_address = &get;
	cout << "&get: " << get_address;
	return 0;
}
*/
//Derefencing pointers
//* is a unary operator that accesses the object to which a pointer refers
//This is the inverse operation of the address-of operator

//Member-of-Pointer Operator -> performs two simultaneous operations
//It derefences a pointer
//It accesses a member of the pointed-to object 

//Used for example, to pass a pointer to a class as a function parameter
//if the receiving function needs to interact with a member of that class,
//the member-of-pointer operator is the tool for the job.

//Pointers and arrays
/*
	int key[]{3,6,9};
	int* keyPointer = key; Points to 3
	
	*/

struct College {
	char name[256];
};
//This function takes a pointer-to-College argument
void print_name(College* collegePointer) {
	printf("%s College\n", collegePointer->name);
}
int main() {
	College bestColleges[] = { "Mag","Nuttfield","Kellog" };
	print_name(bestColleges);
}