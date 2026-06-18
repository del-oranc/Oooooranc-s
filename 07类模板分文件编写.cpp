//问题:类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决:
//解决方式1:直接包含.cpp源文件
//解决方式2 : 将.h声明和.cpp实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
//方式一：
//#include"person.cpp"
//为什么不是包含person.h文件？
//类模板中的成员函数在调用时才创建。调用person.h时，只能看到person.h里面的内容，看不到person.cpp里面的内容
//方式二（多用）：
//#include"person.hpp"
//
//void test01() {
//	Person<string, int>p("lili", 12);
//	p.showPerson();
//}
//void main() {
//	test01();
//}