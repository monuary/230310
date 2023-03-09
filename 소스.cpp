//mutable : const 함수 내에서 값의 변경을 예외적으로 허용. const 선언의 의미를 없애기 때문에 가급적 사용을 피해야 한다.

#include<iostream>
using namespace std;

class SoSimple
{
	int num1;
	mutable int num2;
public:
	SoSimple(int n1,int n2):num1(n1),num2(n2){}
	void ShowSimpleData()const { cout << num1 << ", " << num2 << endl; }
	void CopyToNum2()const { num2 = num1; }	//const 함수는 멤버 변수를 변경할 수 없지만, mutable 변수는 예외다.
};

int main()
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}