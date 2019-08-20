#include <iostream>
#include <string>
#include <sstream>
//测试一下
//测试第二次
using namespace std;
template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;    
}

int main(){
    string s="      1.23  ";
    string cutOff;
    cutOff= s.substr(3,6);

    cout << stringToNum<float>(cutOff) << endl;
    return 0;
    
}
