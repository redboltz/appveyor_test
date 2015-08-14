template <typename T, typename Enabler = void>
struct as;

struct my{};

template<>
struct as<my> {
    void foo(my const&) {}
};

int main() {
    my m;
    as<my> am;
    am.foo(m);
}
