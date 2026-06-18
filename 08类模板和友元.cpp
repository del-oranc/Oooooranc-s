//#include <iostream>
//using namespace std;
//#include <string>
//
////template <class T1, class T2>
////class Person;
////
////template <class T1, class T2>
////void show2(Person<T1, T2>& p) {
////	cout << p.m_age << p.m_name << endl;
////}
//
//template <class T1,class T2>
//class Person {
//	//1、全局函数在类内实现(简单方便)
//	friend void show(Person<T1, T2> &p) {
//		cout << p.m_age << p.m_name << endl;
//	}
//	//2、全局函数在类外实现（麻烦不建议）
//	//加空模板的参数列表<>
//	////如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
//	//friend void show2<>(Person<T1, T2> &p);
//	template <class T1, class T2>
//	friend void show2(Person<T1, T2>& p);
//public:
//	Person(T1 name, T2 age) :m_name(name),m_age(age){}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01() {
//	Person<int, string>p(22, "kk");
//	show(p);
//}
//template <class T1, class T2>
//void show2(Person<T1, T2>& p) {
//	cout << p.m_age << p.m_name << endl;
//}
//
//void test02() {
//	Person<int, string>p(28, "bb");
//	show2(p);
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}