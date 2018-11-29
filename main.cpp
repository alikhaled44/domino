#include <iostream>
#include "domino.h"

using namespace std;



int SIDES = 6;



int main() {
Domino d ;
	for (int i = 0; i <= SIDES; i++) {
		for (int j = 0; j <= SIDES; j++) {
			if (i <= j) {
				d.domino(i, j);

			}
		}
	}

    return 0;
}
