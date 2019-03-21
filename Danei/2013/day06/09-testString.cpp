#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#include <string>

int main(){
	//constructor
	string s = "I love beijing";
	string a(s);
	string b("I love shanghai");
	string c(10,'c');
	cout << "a=" << a << endl;		//I love beijing
	cout << "b=" << b << endl;		//I love shanghai
	cout << "c=" << c << endl;      //cccccccccc
	cout << "----------" << endl;
	//size,length,empty,resize
	cout << "a.size()=" << a.size() << endl;	  //a.size()=14
	cout << "b.length()=" << b.length() << endl;  //b.length()=15
	cout << "c.empty=" << c.empty() << endl;	  //c.empty()=0
	c.resize(20,'d');							  	
	cout << "c=" << c << endl;                     //c=ccccccccccdddddddddd
	cout << "----------" << endl;
	//c_str(),data()
	char* buf = new char[32];
	strcpy(buf,a.c_str());
	printf("buf = %s\n",buf);					  //buf = I love beijing
	printf("sizeof(buf)=%ld\n",strlen(buf));	  //sizeof(buf)= 14
	memset(buf,0,32);
	strcpy(buf,b.data());						  
	printf("buf = %s\n",buf);					  //buf = I love shanghai
	printf("sizeof(buf)=%ld\n",strlen(buf));	  //sizeof(buf)= 15
	cout << "----------" << endl;
	//copy,substr,append
	memset(buf,0,32);							  
	a.copy(buf,7,7);
	cout << buf << endl;						  //beijing
	memset(buf,0,32);
	string tmp = b.substr(7,8);
	cout << "tmp = " << tmp << endl;			  //tmp = shanghai
	c.append(3,'e');
	cout << "c = " << c << endl;				  //c=ccccccccccddddddddddeee
	cout << "----------" << endl;
	//find,rfind
	cout << "'o' at index:" << a.find('o',2) << endl;				//'o' at index:3
	cout << "'shanghai' at index:" << b.find("shanghai",1) << endl;	//'shanghai' at index:7
	cout << "'shanghai' at index:" << b.find(tmp,1) << endl;		//'shanghai' at index:7
	cout << "'shanghai' at index:" << b.rfind(tmp) << endl;			//'shanghai' at index;7
	cout << "----------" << endl;
	//erase,replace
	cout << "a.erase.size()=" << a.erase().size() << endl;			//a.erase.size()=0
	cout << "b.replace()=" << b.replace(0,1,"lucy") << endl;		//b.replace()=lucy love shanghai
	cout << "b.replace()=" << b.replace(0,4,1,'I') << endl;			//b.replace()=I love shanghai
	cout << "----------" << endl;
	//insert
	cout << "b.inser()=" << b.insert(2,"very ") << endl;			//b.insert()=I very love shanghai 
	cout << "b.inser()=" << b.insert(b.size(),2,'~') << endl;		//b.insert()=I very love shanghai~~
	cout << "----------" << endl;
	//getline
	getline(cin,s);
	cout << "s= " << s << endl;										//s= xxx
	return 0;
}
