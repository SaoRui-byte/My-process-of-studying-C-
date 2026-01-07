#include <iostream>
using namespace std;
//new  delete

int* getGapList(int* arr, int size)
{
	int* p = new int[size - 1];

}
int main()
{
	int arr[] = {1,5,6,4,4,3,3,2,1,9};
	int* ptr = new int(1314); //返回一个地址
					//直接赋值
	delete ptr;//ptr不能用了，是野指针
	ptr = NULL;
	//一般会置为空
	//  直接加变量名
	int* p = getGapList(arr, 10);
	delete[] p;//删除数组要加[]
	p = NULL;

	
	
	return 0;
	



}