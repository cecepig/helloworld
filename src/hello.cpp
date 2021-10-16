#include <iostream>
#include <functional>

int main()
{
    [out = std::ref(std::cout << "Hello, world!")]() -> void {
        out.get() << "\n";
    }();
}

