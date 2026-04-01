
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//T?o m?ng ??ng l?u ?i?m
	vector<float> diem;
	//Thêm ?i?m c?a 5 ng??i
	diem.push_back(6); 
	diem.push_back(7.5);
	diem.push_back(4.2);
	diem.push_back(6.4);
	diem.push_back(5.9);

	//Xóa ?i?m c?a 1 ng??i cu?i cùng
	diem.pop_back();

	//Duy?t qua m?ng ?i?m và in ra màn hình
	for (int i = 0; i < diem.size(); i++)
	{
		cout << diem[i] << endl;
	}
	
		
 
}
