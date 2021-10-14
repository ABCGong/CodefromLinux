#include <iostream>
using namespace std;
int arr[101];
int n;

void quickSort(int arr[], int start, int end)//�˴���int arr[]��int*arrЧ����ͬ�������Ա��
{
    if (start < end)//����������
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
        }//����ѭ��������i��j�����ˣ�����Ĵ����ʾ����׼��������������
        arr[start] = arr[i];
        arr[i] = store;
        quickSort(arr, i + 1, end);
        quickSort(arr, start, i - 1);//�ݹ��˼��//��׼�������ٱȽϣ��ճ�����i
    }
}

int main()
{
    int i, j, temp;
    cout << "�����������е����ݸ���" << endl;
    cin >>n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "�������" << i + 1 << "������" << endl;
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    cout << "������Ϊ������:";
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << "   ";
    }
    system("pause");
        return 0;
}


