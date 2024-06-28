#include <iostream>

void PointerPrint(int& a)
{
    std::cout << &a << " " << a << " " << sizeof(a) << "\n";
}

int main()
{
    int a{ 10 };
    int b{ 25 };

    PointerPrint(a);
    PointerPrint(b);


    int arr[10]{ };
    int arr1[10];
    int* harr{ new int[10] };
    int* harr1 = new int[10];
    int* harr2{ new int[10]{ } };
    int* harr3{ new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } };

    std::cout << "---arr\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(arr[i]);
    }

    std::cout << "---arr1\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(arr1[i]);
    }

    std::cout << "---harr\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(harr[i]);
    }


    std::cout << "---harr1\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(harr1[i]);
    }

    std::cout << "---harr2\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(harr2[i]);
    }
    
    std::cout << "---harr3\n";
    for (size_t i = 0; i < 10; i++)
    {
        PointerPrint(harr3[i]);
    }

    delete[] harr;
    delete[] harr1;
    delete[] harr2;
    delete[] harr3;

    return 0;
}