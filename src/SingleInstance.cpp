#include <iostream>

class Singleton
{
private:
    static Singleton m_pInstance;

    Singleton() {};

    ~Singleton() {};

    Singleton(const Singleton &singleton) {};

    const Singleton& operator = (const Singleton& singleton) {};

public:
    static Singleton& getInstance()
    {
        static Singleton m_pInstance;
        return m_pInstance;
    }
};

int main()
{
    Singleton &instance = Singleton::getInstance();
    return 0;
}