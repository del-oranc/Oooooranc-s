//#include <iostream>
//using namespace std;
////函数模板使用关键字template或者class
//template <typename T>//提高复用性，将类型参数化
//void mySwap(T& a, T& b) {
//	T temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10, b = 9;
//	mySwap(a, b);//第一种：编译器自动类型推导
//	mySwap<int>(a, b); //第二种：显示指定类型
//
//}
//template <class T>
//void func() {
//	cout << "func调用" << endl;
//}
//
//void test02() {
//	func<int>();
//}
//
//void main() {
//	test02();
//}