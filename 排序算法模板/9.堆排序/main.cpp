#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define idType int
#define eleType int
#define maxn 50000

idType lson(idType idx)
{
	return 2 * idx + 1;
}
idType rson(idType idx)
{
	return 2 * idx + 2;
}
idType parent(idType idx)
{
	return (idx-1) / 2;
}
bool better(eleType a, eleType b)
{
	return a > b;
}
//heapify 函数中 size 参数的定义是 “当前堆的元素个数”
void heapify(vector<eleType>& heap, int size, eleType curr)
{
	idType lsonId = lson(curr);
	idType rsonId = rson(curr);
	idType optId = curr;
	if (lsonId < size && better(heap[lsonId], heap[optId]))
	{
		optId = lsonId;
	}
	if (rsonId < size && better(heap[rsonId], heap[optId]))
	{
		optId = rsonId;
	}
	if (optId != curr)
	{
		swap(heap[curr], heap[optId]);
		heapify(heap, size, optId);
	}
}

int main()
{
	vector<int> nums = { 4,3,2,7,6,5,7,8,0 };
	//建堆操作
	for (int i = nums.size() / 2; i >= 0; i--)    //堆的heapify操作有一个前提：当前节点的左右子树已经是合法的堆。
	{
		heapify(nums, nums.size(), i);   
	}
	for (int i = nums.size()-1; i >= 0; i--)
	{
		swap(nums[0], nums[i]);
		heapify(nums, i, 0);   //此时左右子树仍然满足，无需重新建堆！
		             //剩下需要排序的元素个数
	}


	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}