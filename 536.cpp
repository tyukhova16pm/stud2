#include <iostream>
using namespace std;
 
int main() 
{
	cout << "index pervogo elementa '0' " << endl;
	cout << "vasha stroka: " << endl;
 

  	const int Length = 256;
    	char lineBuff[Length] = "\0";
 	char resultBuff[Length] = "\0";
 
	const char *p = lineBuff;
	char *ptr = resultBuff;
 
	cin >> lineBuff;
 
		for (; p; p += 2) 
		{
		if (*p != 0)      
	*(ptr)++ = *p;
else break;
		}
 
	p = lineBuff;
	p++;
	for (; p; p+=2) 
	{
		if (*p != 0) 
 	*ptr++ = *p;
else break;
	}
 	cout << "izmenenia: " << resultBuff << endl;
return 0;
}
