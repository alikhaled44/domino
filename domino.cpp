#include <iostream>
#include "domino.h"

using namespace std ;


 void Domino :: domino (int Rd , int Ld) {
     cout << Rd << "-" << Ld << "\n" ;
 } ;

//constructors

//default constructor
Domino ::Domino() {
    Rd = 0 ;
    Ld = 0 ;
}


Domino ::Domino(int R , int L ) {
    Rd = R ;
    Ld = L ;
}

//Methods

int Domino :: getRigthDots () {

      return Rd ;

}

int Domino :: getLeftDots () {

      return Ld ;

}




