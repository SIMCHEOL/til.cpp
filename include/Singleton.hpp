class Singleton {
private:
    Singleton() {}
    Singleton(const Singleton& ref) {}
    Singleton& operator=(const Singleton& ref) {}
    ~Singleton() {}

    int m_value;

public:
    static Singleton& getIncetance() {
        static Singleton myInstance;
        return myInstance;
    }

    void testSingleton();
};