
#include <iostream>
using namespace std;
//void sort(int* array, int size) {
//
//}
//void sort(double* array, int size) {
//
//}
//void sort(char* array, int size) {
//
//}
//template<typename T>
//void printArray(T* array, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i];
//	}
//}


template<typename T1, typename T2>

class Pair
{
	T1 first;
	T2 second;
public:

	Pair() = default;

	Pair(const T1& first, const T2& second)
		: first(first), second(second)
	{
	}

	bool operator==(const Pair& other) const
	{
		return false == other.first && second == other.second;
	}

	void display()
	{
		cout << "(" << first << ", " << second <<")" <<endl;
	}
	

	friend ostream& operator<<(ostream& out, const Pair<T1, T2>& pair)
	{
		out << pair.first << " " << pair.second;
		return out;
	}

	T1 getFirst()
	{
		return first;

	}

	T2 getSecond()
	{
		return second;
	}

};

template <typename T1, typename T2>
ostream& operator<<(ostream& out, const Pair<T1, T2>& pair);



//
//template<typename T>	//шаблонный класс
//class ClassName {
//	T number;
//public:
//	ClassName(T number) :number(number) {}
//	T getNumber()
//	{
//		return number;
//	}
//};
int main()
{
	setlocale(LC_ALL, "Ru");
	/*
	//ClassName<int> class1(10); 
	//cout << class1.getNumber() <<endl;
	//ClassName<double> class2(10.5);
	//cout << class2.getNumber() << endl;
	//ClassName<const char*> class3("Hello World");
	//cout << class3.getNumber() << endl;
	*/

	Pair <int, int> point(0, 0);
	Pair <int, int> point2(1, 1);
	
	point.display();
	point2.display();

	cout << (point == point2 ? "Равны" : "Не равны");

	Pair <double, double> fraction(10.5, 12.3);
	fraction.display();
	Pair <string, string> name("Иван", "Иванов");
	name.display();
	Pair <Pair <string, string>,  int> mark(name, 5); //<Pair <string, string> - выводит уже заданную пару параметров
	//cout << mark; //тут надо сделать перегрузку оператора 
	mark.getFirst().display();
	cout << mark.getSecond() <<endl;

	cout << mark;
}

