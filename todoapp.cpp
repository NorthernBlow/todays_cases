#include <iostream>
#include <string>
using namespace std;


struct Sample {   // создан новый тип данных Sample

	int a;
	int b;
	string m;


};

Sample return_pair(int x, string field) {    // функция типа Sample

	Sample result;  // локальный экземпляр структуры

	result.a = x * x;	// заполняю нужными значениями
	result.b = x * x * x;
	result.m = field

	return result;


}


int add() {

}


int del() {

}


int done() {


}


int ls() {


}


int help() {


}


int report() {


}

class TodoItem {
private:
	int id;
	std::string description;
	bool completed;
public:

	TodoItem() : id(0), description(""), completed(false) {}
	~TodoItem() = default;

};


int main() {

	int x;
	string field;
	std::list<TodoItem> todoItems;

	todoItems.clear();
	while (1) {
		system("sls");
		std::cout << "Todo list Maker - " << version << std::endll;
	}

	cin >> x >> field;
	Sample pairs = return_pair(x, field);
	std::cout << pairs.a << ' ' << pairs.b << pairs.m << '\n'; 

std::string version = "v.0.1.0";
std::cout << "Todo list maker - " << version << std::endl;

}