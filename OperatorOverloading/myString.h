#ifndef MYSTRING_H
#define MYSTRING_H


#include <iostream>
#include <cstring>



//definition of the class MySring
class Mystring {
	friend Mystring operator-(const Mystring& obj);
	friend bool operator==(const Mystring& lhs, const Mystring& rhs);
	friend Mystring operator+(const Mystring& lhs, const Mystring& rhs);
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& is, Mystring& rhs);
	friend Mystring& operator+=(Mystring& lhs, const Mystring& rhs);

private:
	char *str; 
public:
	Mystring();
    Mystring(const char*s);
	Mystring(const Mystring &source);
	Mystring(Mystring &&source);
	~Mystring();
	void display() const;
	int get_length() const;
	const char* get_str() const;
    Mystring& operator=(const Mystring& rhs );
	Mystring& operator=(Mystring&& rhs);
	bool operator<(const Mystring& rhs) const;
	bool operator>(const Mystring& rhs) const;
	//Mystring& operator+=(const Mystring& rhs);
	Mystring operator*(int n) const;
	Mystring& operator*=(int n);
	Mystring operator++(int);
	Mystring& operator++(){*this = *this + *this; return *this;}
	// comment the operator overloaded for the - operator member methods to test the friend function
	//Mystring operator-() const;
	//bool operator==(const Mystring& rhs) const;
	//Mystring operator+(const Mystring& rhs) const;
	
};

// No-args constructor
Mystring::Mystring()
	:str(nullptr){
	str = new char[1];
	*str = '\0';
	//std::cout << "no args constructor used" << std::endl;
}

//Overloaded constructor
Mystring::Mystring(const char*s)
	:str(nullptr){
		if(s == nullptr){
			str = new char[1];
			*str = '\0';
		}else{
			str = new char[std::strlen(s) + 1];
			std::strcpy(str,s);
		}
		//std::cout << "overloaded constructor used" << std::endl;
}

// Copy constructor
Mystring::Mystring(const Mystring& source)
    : str(nullptr) {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
	//std::cout << "copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring&& source)
	: str(source.str) {
	source.str = nullptr;
	//std::cout << "move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring(){

	// if the pointer is null, there is no need to delete it
	if(str == nullptr){
		//std::cout << "Calling destructor for: nullptr" << std::endl;
	}else{
		//std::cout << "Calling destructor for: " << str << std::endl;
		delete [] str;
	}	
}


//Display method
void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const { return std::strlen(str);}

//string getter
const char *Mystring::get_str() const { return str;}

//operator overloaded for the copy operator =
Mystring& Mystring::operator=(const Mystring& rhs){
	//std::cout << "the copy operator is called" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;

    str = new char[std::strlen(rhs.str) + 1 ];
    str = std::strcpy(str, rhs.str);

    return *this;
}

// operator overloaded for the move operator =
Mystring& Mystring::operator=(Mystring&& rhs){
	//std::cout << "the move operator is called" << std::endl;
	if(this == &rhs){  // self assignment check
		return *this;	// return the object itself
	}
	delete [] str;		// delllocate the memory of the object

	str = rhs.str;		// copy the pointer of the rhs object to the lhs object
	rhs.str = nullptr; 	// null the pointer of the rhs object

	return *this;		// return the object itself
}


// operator overloaded for the < operator

bool Mystring::operator<(const Mystring &rhs) const{

	// q: how does the strcmp works?
	// a: it returns 0 if the strings are equal, 
	//1 if the lhs string is greater than the rhs string 
	//and -1 if the rhs string is greater than the lhs string
	return (std::strcmp(str, rhs.str) < 0);
}

bool Mystring::operator>(const Mystring &rhs) const{


	// another solution using the < operator
	//return !(*this < rhs);
	return std::strcmp(str, rhs.str) > 0;
}
// operator overloaded for the * operator
Mystring Mystring::operator*(int n) const{
	Mystring newString;
	for(size_t i = 0; i < n; i++){
		newString = *this + newString;
	}
	return newString;
}
// operator overloaded for the += operator

/*Mystring& Mystring::operator+=(const Mystring& rhs){

	*this = *this + rhs;

	return *this;

}*/

// operator overloaded for the *= operator
Mystring& Mystring::operator*=(int n){
	*this = *this * n;
	return *this;
}


// operator overloaded for the ++ operator
Mystring Mystring::operator++(int){
	Mystring aux;
	aux = *this;
	*this = *this + *this;
	return aux;
}


// comment the operator overloaded for the - operator member methods to test the friend function
// operator overloaded for the - operator
/*Mystring Mystring::operator-() const{
	char *buff = new char[std::strlen(str) + 1];
	std::strcpy(buff, str);

	for(size_t i = 0; i < std::strlen(buff); i++){
		buff[i] = std::tolower(buff[i]);
	}

	Mystring temp (buff);
	delete [] buff;
	return temp;
}*/
// operator overloaded for the == operator
/*bool Mystring::operator==(const Mystring& rhs) const{
	return (std::strcmp(str, rhs.str) == 0);
}*/

// operator overloaded for the + operator
/*
Mystring Mystring::operator+(const Mystring& rhs) const{
	char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, str);
	std::strcat(buff, rhs.str);

	Mystring temp(buff);
	delete [] buff;
	return temp;
}*/


// friend functions
// operator overloaded for the - operator
Mystring operator-(const Mystring& obj){
	//std::cout << "***the friend function is called*****" << std::endl;
	char *buff = new char[std::strlen(obj.str) + 1];
	std::strcpy(buff, obj.str);

	for(size_t i = 0; i < std::strlen(buff); i++){
		buff[i] = std::tolower(buff[i]);
	}

	Mystring temp (buff);
	delete [] buff;
	return temp;
}
bool operator==(const Mystring& lhs, const Mystring& rhs){
	return (std::strcmp(lhs.str, rhs.str) == 0);
}

Mystring operator+(const Mystring& lhs, const Mystring& rhs){
	char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);

	Mystring temp(buff);
	delete [] buff;
	return temp;
}

std::ostream& operator<<(std::ostream& os, const Mystring& rhs){
	os << "the string is " << rhs.str;
	return os;
}


std::istream& operator>>(std::istream& is, Mystring& rhs){
	char *buff = new char[1000];
	is >> buff;
	rhs = Mystring(buff); // if you have a move or copy assignment operator, it will be called here
	delete [] buff;
	return is;
}

// operator overloaded for the += operator
Mystring& operator+=(Mystring& lhs, const Mystring& rhs){
	lhs = lhs + rhs;
	return lhs;
}
#endif