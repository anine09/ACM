#define MAXSIZE 100000
#include <iostream>
using namespace std;

//struct define
typedef struct
{
    int r[MAXSIZE + 1];
    int length;
} SqList;

//swap function
void swap(SqList *L, int i, int j)
{
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] = temp;
}



//Partition funciton
int Partition(SqList *L,int low ,int high){
    int pivotkey;
    pivotkey = L->r[low];
    while(low<high){
        while(low&&high&&L->r[high]>=pivotkey){
            high--;
        }
        swap(L, low, high);
        while (low<high&&L->r[low]<=pivotkey)
        {
            low++;
        }
        swap(L, low, high);
    }
    return low;
}

//quick sort function
void QSort(SqList *L,int low ,int high){
    int pivot;
    if(low<high){
        pivot = Partition(L, low, high);
        QSort(L, low, pivot - 1);
        QSort(L, pivot + 1, high);
    }
}

SqList a;
int n;

int main()
{
    cin >> n;
    a.length = n;
    int num;
    for (int i = 1; i <=a.length; i++)
    {
        cin >> num;
        a.r[i] = num;
    }
    QSort(&a, 1, a.length);
    for (int i = 1; i <=n; i++)
    {
        cout << a.r[i];
    }
    
    return 0;
}