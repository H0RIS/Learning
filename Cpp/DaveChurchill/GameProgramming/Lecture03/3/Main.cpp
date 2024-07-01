#include <iostream>

void PointerPrint(int& a)
{
    std::cout << &a << " " << a << " " << sizeof(a) << "\n";
}

class IntArray
{
private:
    size_t m_size{};
    int* m_arr{};

public:
    IntArray(size_t size)
        : m_size(size)
        , m_arr(new int[size]{})
    {
        std::cout << "Array Constuctor\n";
    }

    ~IntArray()
    {
        delete[] m_arr;

        std::cout << "Array Destructor\n";
    }

    int get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, int val)
    {
        m_arr[index] = val;
    }

    void print() const
    {
        std::cout << "m_size: " << m_size << "\n";

        for (size_t i = 0; i < m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << "\n";
        }
    }
};

int main()
{
    IntArray myArray(10);

    myArray.print();

    myArray.set(3, 48);
    myArray.set(7, 12);
    std::cout << myArray.get(3) << "\n";

    myArray.print();

	return 0;
}