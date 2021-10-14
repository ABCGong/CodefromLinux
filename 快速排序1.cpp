#include <iostream>
using namespace std;
int arr[101];
int n;

void quickSort(int arr[], int start, int end)//此处的int arr[]与int*arr效力相同，都可以标记
{
    if (start < end)//避免乱输入
    {
        int i = start, j = end, store = arr[start];
        while (i < j)
        {
            while (i < j && arr[j] >= store)
            {
                j--;
            }
            
            while (i < j && arr[i] <= store)
            {
                i++;
            }
            if (i < j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }//跳出循环即代表i与j相碰了，下面的代码表示将基准数与相碰处交换
        arr[start] = arr[i];
        arr[i] = store;
        quickSort(arr, i + 1, end);
        quickSort(arr, start, i - 1);//递归的思想//基准数不必再比较，空出来了i
    }
}

int main()
{
    int i, j, temp;
    cout << "请输入数组中的数据个数" << endl;
    cin >>n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "请输入第" << i + 1 << "个数据" << endl;
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    cout << "排序结果为（升序）:";
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << "   ";
    }
    system("pause");
        return 0;
}


