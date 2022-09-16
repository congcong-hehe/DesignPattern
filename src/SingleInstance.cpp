#include <iostream>

class Singleton
{
private:
    Singleton() {};

    ~Singleton() {};

    Singleton(const Singleton &singleton) {};

    const Singleton& operator = (const Singleton& singleton) {};

public:
    static Singleton& getInstance()
    {
        static Singleton m_pInstance;   //  第一次调用的时候初始化
        return m_pInstance;
    }
};

int main()
{
    Singleton &instance = Singleton::getInstance();
    return 0;
}