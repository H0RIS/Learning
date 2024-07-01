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

    T& operator [](size_t index)
    {
        return m_arr[index];
    }

    const T& operator [](size_t index) const
    {
        return m_arr[index];
    }

};

int main()
{
    TArray<float> myArray(10);

    myArray.print();

    myArray.set(3, 48.23f);
    myArray.set(7, 12.1f);
    std::cout << myArray.get(3) << "\n";

    myArray[0] = 1.2345f;
    myArray[1] = 7.543f;

    myArray.print();

    const TArray<double> dArray(5);

    std::cout << dArray[2] << "\n";

    dArray.print();

    return 0;
}