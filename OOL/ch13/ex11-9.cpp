#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator >> (istream& in, Phone& ob);
	friend ostream& operator << (ostream& out, Phone ob);
};

istream& operator >> (istream& in, Phone& ob) {
	cout << "이름:";
	string name;
	getline(in, name);

	cout << "전화번호 :";
	string telnum;
	getline(in, telnum);

	cout << "주소 :";
	string address;
	getline(in, address);

	ob.name = name;
	ob.telnum = telnum;
	ob.address = address;

	return in; //cin을 리턴
}

ostream& operator << (ostream& out, Phone ob) {
	out << "(" << ob.name << "," << ob.telnum << "," << ob.address << ")";
	return out;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy; // (cin, girl)
	cout << girl << endl << boy << endl;

}