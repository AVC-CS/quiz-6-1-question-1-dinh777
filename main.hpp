#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************

void getTwoValues(int &, int &) ; 
int getNextPrime(int &) ;
int getPrevPrime(int &) ; 


// ******************************
// Implement all your functions here
// ******************************
void getTwoValues(int &begin, int &end) {

do{
cout << "Enter two integer values: " << endl ; 
cin >> begin >> end ; 
}
while (begin>end) ; // The first input "begin" must be less than the second input "end"
// Otherwise, you should retake two inputs repeatedly until begin < end.

// Assign two input values to the parameters
// No return value
}


int getNextPrime(int &begin){

// Find the closest next prime number to the given parameter
// In other words, prime number > begin and the closest to the "begin"
// Return the prime number

// OUTER LOOP : SET THE SPECIFIC NUMBER THAT IS LOOPING HERE : 
for (int num=(begin+1) ; num < 999999999999 ; num++){	// "num<999999999999" because we'll keep running forever until we find the next 
                                            // prime number, we will terminate program at the bottom instead of by this for loop condition
    // we also use "num=(begin+1)" in case the number the user inputs is already a prime number, therefore we find the NEXT prime number
	 int prime = 1;

//INNER LOOP
	for (int i = 2 ; i<num ; i++) { //inner loop, to check if each number from the range is prime or not 
		if ( num % i == 0){ // if the number you are checking is not prime
			prime = 0; // 0 means false
			break ; 
		}
    }
		if (prime) {// if prime is true, aka 1 {
    return(1) ; //return the value 1, aka true to display prime number
        }
      return(0) ; //return the value 0, aka false, therefore skipping line 28, and moving on to next number
  // ^^ having this above return line will ensure this isPrime func is always
  // returning some value, eg if some prime number never exists, it will at least 
  // return the value 0 for false, therefore avoiding any warnings   
}
}


int getPrevPrime(int &end) {


    // Find the prime number which is closest to and less than the given parameter
// prime number < end
// Return the prime number

// OUTER LOOP : SET THE SPECIFIC NUMBER THAT IS LOOPING HERE : 

// it is now "end-1" and "num--" to find the prime number previous to end var
for (int num=(end-1) ; num < 999999999999 ; num--){	// "num<999999999999" because we'll keep running forever until we find the next 
                                            // prime number, we will terminate program at the bottom instead of by this for loop condition
    // we also use "num=(end-1)" in case the number the user inputs is already a prime number, therefore we find the NEXT prime number
	 int prime = 1;

//INNER LOOP
	for (int i = 2 ; i<num ; i++) { //inner loop, to check if each number from the range is prime or not 
		if ( num % i == 0){ // if the number you are checking is not prime
			prime = 0; // 0 means false
			break ; 
		}
    }
		
        if (prime) {// if prime is true, aka 1 
    return(1) ; //return the value 1, aka true, to display prime number
        }
       return(0) ; //return the value 0, aka false, and moving on to next number
  // ^^ having this above return line will ensure this isPrime func is always
  // returning some value, eg if some prime number never exists, it will at least 
  // return the value 0 for false, therefore avoiding any warnings  
}

}
