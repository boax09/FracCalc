#include "stdFuncs.h"
#include <iostream>
#include <string>
using namespace std;

void assertEquals(int expected, int actual, string message){

	if(expected==actual){
		cout<<"PASSED: "<<message<<endl;
	}else{
		cout<< "FAILED: "<< message<<endl<<
			"EXPECTED: "<< expected <<endl<<
			"ACTUAL: "<< actual <<endl;
	}
}


	
