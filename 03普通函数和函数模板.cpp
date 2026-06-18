// 普通函数与函数模板区别:
// 普通函数调用时可以发生自动类型转换(隐式类型转换) 例如：double a=1.23;int b=a;自动发生隐式类型转换则b=1;
// 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数与函数模板调用规则
//1、如果函数模板和普通函数都可以调用，优先调用普通函数
//2、可以通过空模板参数列表 强制调用 函数模板
//3、函数模板可以发生函数重载（返回值不能作为函数重载条件）
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

//普通函数与函数模板在实际开发应用中不要同时出现！！！！！！！！！
//#include <iostream>
//#include<string>
//using namespace std;
//void myPrint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//template<class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用的模板重载" << endl;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 20;
//	//myPrint(a, b); //1、优先调用普通函数
//	//myPrint<>(a, b);//2、通过空模板参数列表，强制调用函数模板
//	//myPrint(a, b, c);//3、函数模板可以发生重载
//}
//
////模板的通用性是有局限的
////例如传入Person这种自定义数据类型，通用模板就无法正常运行
////利用函数的重载，为这些特定的类型提供具体化的模板
//class Person {
//public:
//	Person(int age,string name ):m_age(age), m_name(name){}
//	int m_age;
//	string m_name;
//};
//template<class T>
//bool myCompare(T a, T b)
//{
//	if (a == b)
//	{
//		cout << "a==b" << endl;
//		return true;
//	}
//	else
//	{
//		cout << "a!=b" << endl;
//		return false;
//	}
//}
//template<> bool myCompare(Person p1, Person p2) {
//	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name) 
//		return true;
//	else 
//		return false;
//}
//void test02() {
//	Person p1(11, "li");
//	Person p2(10, "li");
//	bool ret = myCompare(p1, p2);
//	if(ret)
//	{
//		cout << "p1==p2" << endl;
//	}
//	else
//	{
//		cout << "p1!=p2" << endl;
//	}
//}
//void main() {
//	test02();
//}