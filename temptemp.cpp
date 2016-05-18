#include <mutex>
#include <iostream>

template <typename Mutex = std::mutex, template<typename> class LockGuard = std::lock_guard>
struct foo{
    Mutex mtx;
    void bar() {
        LockGuard<Mutex> lg(mtx);
    }
};

int main()
{
    foo<> f;
    std::cout << "hoge" << std::endl;
    f.bar();
}
