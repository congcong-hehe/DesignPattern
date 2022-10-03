#include <iostream>

using namespace std;

// 简单工厂模式
// 工厂模式可以隐藏new处理后的细节，将new操作自己控制，可以控制内存的释放，还可以使用内存池优化

typedef enum ProductType 
{
    A, 
    B
};

class Product
{
public:
    virtual void show() = 0;
};

class ProductA : public Product
{
public:
    void show()
    {
        cout << "A" << endl;
    }
};

class ProductB : public Product
{
public:
    void show()
    {
        cout << "B" << endl;
    }
};

class Factry
{
public:
    Product* CreateProduct(ProductType type)
    {
        switch(type)
        {
            case (A):
                return new ProductA();  // 可以返回智能指针，自动释放
            case (B): 
                return new ProductB();
        }
    }
};

int main()
{
    Factry factry;
    Product* a = factry.CreateProduct(ProductType::A);
    a->show();
    Product* b = factry.CreateProduct(ProductType::B);
    b->show();

    delete a;
    delete b;
}