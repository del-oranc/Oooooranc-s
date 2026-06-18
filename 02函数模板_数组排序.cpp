//#include <iostream>
//using namespace std;
//
//template <class T>
//			//T arr[]形参 代表指针
//void test01(T arr[],int num) {	
//	for(int j = 0;j<num-1;j++)
//	{
//		for (int i = 0; i < num - 1-j; i++) {
//			if (arr[i] < arr[i + 1]) {
//				T temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//}
//void main() {
//	int arr[] = { 2,5,1,6,4,7 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	test01<int>(arr,num);
//	for(int i = 0;i<num;i++)
//	{
//		cout << arr[i] << endl;
//	}
//	char arr1[] = "abdec";
//	int num1 = sizeof(arr1) / sizeof(arr1[0]);
//	test01<char>(arr1, num1);
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr1[i] << endl;
//	}
//}