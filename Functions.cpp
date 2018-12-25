
#include "Functions.h"


#include <iostream>
#include <string>
using namespace std;


//checks if fraction
bool fracCheck(string temp){
	if(temp.find("/")==1)
		return true;
	return false;

}
//finds numerator from a string
int retrNum(string s){
	int loc=s.find("/");
	string temp= s.substr(0,loc);
	const char *c= temp.c_str();
	return atoi(c);
}
//finds denominator from a string
int retrDenom(string s){
        int loc=s.find("/");
	string temp = s.substr(loc+1);
	const char *c = temp.c_str();
        return atoi(c);

}

string addition(string a,string b){
//turns whole number integers into fractions
	if(!fracCheck(a))
		a=a.insert(a.length(),"/1");
	if(!fracCheck(b))
                b=b.insert(b.length(),"/1");
//computation
		int totalnum=(retrNum(a)*retrDenom(b))+(retrNum(b)*retrDenom(a));
		int totaldenom=(retrDenom(a)*retrDenom(b));
		
		return to_string(totalnum)+"/"+to_string(totaldenom);
	

}

string multiplication(string a, string b){
	if(!fracCheck(a))
                a=a.insert(a.length(),"/1");
        if(!fracCheck(b))
                b=b.insert(b.length(),"/1");

	int totalnum=retrNum(a)*retrNum(b);
	int totaldenom=retrDenom(a)*retrDenom(b);
	
	return to_string(totalnum)+"/"+to_string(totaldenom);
}
	
string subtraction(string a, string b){
//turns whole number integers into fractions
        if(!fracCheck(a))
                a=a.insert(a.length(),"/1");
        if(!fracCheck(b))
                b=b.insert(b.length(),"/1");
//computation
                int totalnum=(retrNum(a)*retrDenom(b))-(retrNum(b)*retrDenom(a));
                int totaldenom=(retrDenom(a)*retrDenom(b));

                return to_string(totalnum)+"/"+to_string(totaldenom);


}

string division(string a, string b){
        if(!fracCheck(a))
                a=a.insert(a.length(),"/1");
        if(!fracCheck(b))
                b=b.insert(b.length(),"/1");

        int totalnum=retrNum(a)*retrDenom(b);
        int totaldenom=retrDenom(a)*retrNum(b);

        return to_string(totalnum)+"/"+to_string(totaldenom);

}


