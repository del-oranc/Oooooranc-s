//#include <iostream>
//#include<string>
//using namespace std;
////
//template<class typeName, class typeAge>
//class Person {
//public:
//	Person(typeName name, typeAge age) {
//		m_name = name;
//		m_age = age;
//	} 
//	void showPerson() {
//		cout << m_name << m_age << endl;
//	}
//	typeName m_name;
//	typeAge m_age;
//};
////1、指定传入类型（最常用）
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p("jj", 12);
//	printPerson1(p);
//}
////2、参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1的数据类型为:" << typeid(T1).name() << endl;
//	cout << "T2的数据类型为:" << typeid(T2).name() << endl;
//}
//void test02() {
//	Person<string, int>p("tt", 15);
//	printPerson2(p);
//}
////3、整个类模块化
//template<class T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T的数据类型为:" << typeid(T).name() << endl;
//}
//void test03() {
//	Person<string, int>p("KK", 88);
//	printPerson3(p);
//}
//void main() {
//	test01();
//	test02();
//	test03();
//}
