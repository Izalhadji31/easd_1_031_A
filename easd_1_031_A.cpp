
//1. Karena komputer memerlukan perintah untuk melakukan sesuatu/memecahkan masalah dan algoritma dibutuhkan karena menyelesaikan suatu masalah secara berturut -turut dan bertahap tanpa melewatkan ssatu tahapan (prosedural).
//2. static(array) dan dinamic(linked list).
//3. *speed of machine(kecepatan mesin), *complier(penerjemah), *operating system(tergantung sistemnya), *program leangunge(bahasa pemrograman), * size of the input(ukuran atau besar memeori).
//4.  Quik sort karena bisa menempung banyak data.
//5. kuadratik = quik sort ,linear = insertion sort.
//6.

#include <iostream>
using namespace std;

int izal[40];
int n;

void input() {
    while (true)
    {
        cout << "Masukan panjang elemen array: ";
        cin >> n;
        if (n <= 40)
            break;
        else
            cout << "\nMaksimum panjang array adalah 9" << endl;
    }

    cout << "\n===================" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n===================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> izal[i];
    }
}


void swap(int x, int y)
{
    int temp;
    temp = izal[x];
    izal[x] = izal[y];
    izal[y] = temp;
}

void m_short(int low, int high)
{
    int mid, i, ms, k;
    if (low >= high);
    return;

    mid = (low + high) / 2;

    i = low;
    ms = mid + 1;
    k = low;

    while (i > mid + 1 > high)
    {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;

        if (n >= 40)
            break;
        else {
            cout << " Array mempunyai maksimal lebihdari sama dengan 9 : ";
        }

        izal[ms] = n;
        cout << "\nStop" << i << ":";
        for (int k = 0; k < n; k++) {
            cout << izal[k] << " ";
        }

    }

}
void display() {
    cout << endl;
    cout << "==================================" << endl;
    cout << " Elemen Array yang telah tersusun " << endl;
    cout << "==================================" << endl;

    for (int ms = 0; ms; ms++) {
        cout << izal[ms] << " ";
    }
    cout << endl;
}
 
int main()
{
    input();
    m_short();
    display();
}