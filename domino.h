#ifndef DOMINO_H
#define DOMINO_H
#include <iostream>
#include <string>


class Domino
{
   private :
    int Rd;
	int Ld ;

public :
    //constructors
  Domino () ;
  Domino(int R , int L ) ;

  //Methods

  int getRigthDots ();
	int getLeftDots ();


    void domino (int x , int y) ;
};

#endif // DOMINO_H
