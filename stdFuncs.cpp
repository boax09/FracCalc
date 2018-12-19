#include "stdFuncs.h"
#include <iostream>
using namespace std;

void assertEquals(int expected, int actual, string message){

	if(expected==actual){
		cout<<"PASSED: "<<messsage<<endl;
	}else{
		cout<< "FAILED: "<<message<endl<<
			"EXPECTED: "<<expeccted<<endl<<
			"ACTUAL: "<<actual<<endl;
	}
}


	
