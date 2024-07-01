#include <iostream>

template <typename T>
class TArray
{
private:
    size_t m_size{};
    T* m_arr{};

public:
    TArray(size_t size)
        : m_size(size)
        , m_arr(new T[size] {})
    {
        std::cout << "Array Constuctor\n";
    }

    ~TArray()
    {
        delete[] m_arr;

        std::cout << "Array Destructor\n";
    }

    T get(size_t index) const
    {
        return m_arr[index];
    }

    void set(size_t index, T val)
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
    TArray<float> myArray(10);

    myArray.print();

    myArray.set(3, 48.23f);
    myArray.set(7, 12.1f);
    std::cout << myArray.get(3) << "\n";

    myArray.print();

    return 0;
}