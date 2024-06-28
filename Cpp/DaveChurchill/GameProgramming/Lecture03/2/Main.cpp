#include <iostream>

void PointerPrint(int& a)
{
    std::cout << &a << " " << a << " " << sizeof(a) << "\n";
}

int main()
{
    int a{ 10 };
    int b{ 25 };
    int* pa{ &a };
    int* pb{ &b };

    PointerPrint(a);
    PointerPrint(b);

    *pa = 17;
    // Visual studio places variables 8 memory-addresses away from eachother, (pb - 8) is pa
    *(pb - 8) = 3;

    PointerPrint(a);
    PointerPrint(b);

	return 0;
}