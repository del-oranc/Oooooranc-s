//#include <iostream>
//#include<string>
//using namespace std;
////
//template<class typeName,class typeAge >
//class  Person {
//public:
//	Person(typeName name, typeAge age);//类内声明
//	void showPerson();//类内声明
//	typeName m_name;
//	typeAge m_age;
//};
////构造函数的类外实现
//template<class typeName, class typeAge>
//Person<typeName, typeAge>::Person(typeName name, typeAge age) {
//	m_name = name;
//	m_age = age;
//}
////普通函数的类外实现
//template<class typeName,class typeAge>
//void Person<typeName, typeAge>::showPerson() {
//	cout << m_name << m_age << endl;
//}
//void test01() {
//	
//	//Person p("lili", 11);1、类模板没有自动类型推导使用方式，只能用显示指定类型方式
//	Person< string,int>p( "lili",11);
//	p.showPerson();
//	//2、类模板在模板参数列表中可以有默认参数 template<class typeName,class typeAge = int>
//	//Person< string>p("lili", 11);
//}
//void main() {
//	test01();
//}
////类模板中成员函数和普通类中成员函数创建时机是有区别的
////普通类中的成员函数一开始就可以创建。
////类模板中的成员函数在调用时才创建。