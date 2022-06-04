#include <iostream>
using namespace std;

int main()
{
int arr[10] = {100, 255, 250, 240, 1, 5, 6, 7, 9, 10};
int b = 100;
cout<<"Массив:"<<endl;
for(auto i : arr)
{
cout<<i<<" ";
}
cout<<"\n";
cout<<"Выбранное число:"<<endl;
cout<<"b="<<b<<endl;
int sum_less=0;
int sum_gr=0;
for(auto i : arr)
{
if (i>b) sum_gr=sum_gr+i;
else if (i<=b) sum_less++;
}
cout<<"Количество элементов меньше выбранного числа: "<<sum_less<<endl;
cout<<"Сумма элементов больших выбранного числа: "<<sum_gr<<endl;
}
