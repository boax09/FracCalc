
#include "Functions.h"


#include <iostream>
#include <string>
using namespace std;



int stringParser(string temp, int n){
	int loc=temp.find('+' || '-' || '/' || '*' );
	while(!(temp.substr(loc-1,loc)==")")){
		loc=temp.substr(loc).find('+' || '-' || '/' || '*');
	}
	return loc;

}

