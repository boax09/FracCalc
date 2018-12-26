
#include "Functions.h"


#include <iostream>
#include <string>
using namespace std;


//checks if fraction
bool fracCheck(string temp){
	if((temp.find("/")==!0))
		return true;
	return false;

}
//finds numerator from a string
int retrNum(string s){
	int loc=s.find("/");
	string temp= s.substr(0,loc);
	//if string is a mixed fraction
/*        if(!(s.find(" ")==0)){
        int space=s.find(" ");
	temp=s.substr(space,loc);

}
*/
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


//simplifies an improper fraction
string simplify(string a){
int num=retrNum(a);
int denom=retrDenom(a);
int remainder=0;
remainder=num/denom;
num=num-(remainder*denom);
if(denom%num ==0){
denom=denom/num;
num=1;
}
return to_string(remainder)+" "+to_string(num)+"/"+to_string(denom);


}

//Addition function
string addition(string a,string b){
//turns whole number integers into fractions

	if(!fracCheck(a))
		a=a.insert(a.length(),"/1");
	if(!fracCheck(b))
                b=b.insert(b.length(),"/1");
//computation
	int totalnum=(retrNum(a)*retrDenom(b))+(retrNum(b)*retrDenom(a));
	int totaldenom=(retrDenom(a)*retrDenom(b));
	string final=  to_string(totalnum)+"/"+to_string(totaldenom);
	
	if(retrNum(final)>retrDenom(final)){
		final=simplify(final);
	
	return final;

}
}

//Multiplication Function
string multip(string a, string b){
//turn whole number integers into fractions
	if(!fracCheck(a))
                a=a.insert(a.length(),"/1");
        if(!fracCheck(b))
                b=b.insert(b.length(),"/1");

	cout<<a<<" string a"<<endl;
	cout<<b<<" string b"<<endl;
	//computation
	int totalnum=retrNum(a)*retrNum(b);
	int totaldenom=retrDenom(a)*retrDenom(b);
	
	return to_string(totalnum)+"/"+to_string(totaldenom);
}


//Subtraction Function
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
//Division function
string division(string a, string b){
        if(!fracCheck(a))
                a=a.insert(a.length(),"/1");
        if(!fracCheck(b))
                b=b.insert(b.length(),"/1");

        int totalnum=retrNum(a)*retrDenom(b);
        int totaldenom=retrDenom(a)*retrNum(b);

        return to_string(totalnum)+"/"+to_string(totaldenom);

}


