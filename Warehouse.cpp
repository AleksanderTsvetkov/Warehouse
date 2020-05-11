#include <iostream>
using namespace std;

class product {

	public:
		string name;
		string expirity;
		string entry;
		string manufacturer;
		string quality;
		double quantity;
		// TODO mqsto na suhranenie
		string moreinfo;
};
product item[];

void item::print() {
	for (int i = 0; i <= item.count(); i++) {
		cout << endl << item.name;
		cout << endl << item.expirity;
		cout << endl << item.entry;
		cout << endl << item.manufacturer;
		cout << endl << item.qualityq;
		cout << endl << item.quantitya;
		cout << endl << item.moreinfo;
	}
}
void item::add() {}
void item::remove() {}
void item::log(string from, string to) {}
void item::clean() {}

int main() {
	return 0;
}