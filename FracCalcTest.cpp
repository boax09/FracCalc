#include "stdFuncs.cpp"
#include "Functions.cpp"
#include <iostream>
#include <string>

using namespace std;


//passing string as arguments
int main(int argc, char* argv[]){
	/*	if(argc<2){
		cerr<<"Usage: "<<argv[0]<<" [num of test to run]"<<endl;
		return 1;
	}else{
		int testNum= atoi(argv[1]);
	//	if(testNum==1){
*/		
		cout<<argv[1]<<" argv[1]"<<endl;
                cout<<argv[2]<<" argv[2]"<<endl;
                cout<<argv[3]<<" argv[3]"<<endl;


		cout<<multip(argv[1],argv[3]);
		
		//	assertEquals(5,stringParser(s1,1),"(1/2)+(3)");
		
		
		
	//	}
//	}


return 0;
}







