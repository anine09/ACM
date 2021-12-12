#define MAXSIZE 100000
#define MAX_LENGTH_INSERT_SORT 100
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

//Insertion Sort
void InsertSort(SqList *L)
{
    int i, j;
    for (int i = 2; i <= L->length; i++)
    {
        if (L->r[i] < L->r[i - 1])
        {
            L->r[0] = L->r[i];
            for (j = i - 1; L->r[j] > L->r[0]; j--)
            {
                L->r[j + 1] = L->r[j];
            }
            L->r[j + 1] = L->r[0];
        }
    }
}

//Partition funciton
int Partition(SqList *L, int low, int high)
{
    int pivotkey;
    int m = low + (high - low) / 2;
    if (L->r[low] > L->r[high])
    {
        swap(L, low, high);
    }
    if (L->r[m] > L->r[high])
    {
        swap(L, high, m);
    }
    if (L->r[m] > L->r[low])
    {
        swap(L, m, low);
    }
    pivotkey = L->r[low];
    L->r[0] = pivotkey;
    while (low < high)
    {
        while (low && high && L->r[high] >= pivotkey)
        {
            high--;
        }
        L->r[low] = L->r[high];
        while (low < high && L->r[low] <= pivotkey)
        {
            low++;
        }
        L->r[high] = L->r[low];
    }
    L->r[low] = L->r[0];
    return low;
}

//quick sort function
void QSort(SqList *L, int low, int high)
{
    int pivot;
    if ((high - low) > MAX_LENGTH_INSERT_SORT)
    {
        if (low < high)
        {
            pivot = Partition(L, low, high);
            QSort(L, low, pivot - 1);
            low = pivot + 1;
        }
    }
    else
    {
        InsertSort(L);
    }
}

SqList a;
int n;

int main()
{
    /*
    cin >> n;
    a.length = n;
    int num;
    for (int i = 1; i <= a.length; i++)
    {
        cin >> num;
        a.r[i] = num;
    }
    */
   
    int i = 1;
    while (1)
    {
        int the_num;
        cin >> the_num;
        if (the_num == 0)
            break;
        else
        {
            a.r[i] = the_num;
            i++;
        }
    }
    a.length = i;
    QSort(&a, 1, a.length);
    /*
    for (int i = 1; i <= n; i++)
    {
        cout << a.r[i]<<" ";
    }
    */
    cout << "The Max number is " << a.r[a.length] << endl;
    cout << "The Min number is " << a.r[2];

    return 0;
}