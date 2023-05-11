#include <iostream>
#include <fstream>


void change_arr1(int* arr, int n)
{

    int* arr_temp = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr_temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            arr[i] = arr_temp[0];
        }else
        {
            arr[i] = arr_temp[i + 1];
        }
    }

    delete[] arr_temp;
}

void change_arr2(int* arr, int n)
{

    int* arr_temp = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr_temp[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[i] = arr_temp[n-1];
        }else
        {
            arr[i] = arr_temp[i - 1];
        }
    }

    delete[] arr_temp;
}


int main()
{
    setlocale(LC_ALL, "ru");
    std::ifstream fin("in.txt");
    if (fin.is_open())
    {
        int length1, length2;
        fin >> length1;
        int* arr1 = new int[length1];
        for (int i = 0; i < length1; i++)
        {
            fin >> arr1[i];
        }

        fin >> length2;
        int* arr2 = new int[length2];
        for (int i = 0; i < length2; i++)
        {
            fin >> arr2[i];
        }

        change_arr1(arr1, length1);
        change_arr2(arr2, length2);

        std::ofstream fout("out.txt");
        fout << length2 << std::endl;
        for (int i = 0; i < length2; i++)
        {
            fout << arr2[i] << " ";
        }

        fout << std::endl << length1 << std::endl;
        for (int i = 0; i < length1; i++)
        {
            fout << arr1[i] << " ";
        }


        // подчищаем
        fin.close();
        fout.close();
        delete[] arr1;
        delete[] arr2;
    }
    else
    {
        std::cout << "Не удалось открыть файл.";
    }
}

