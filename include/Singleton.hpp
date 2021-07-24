#include <memory>
#include "msg.hpp"

template <class T>
class Singleton {
private:
    Singleton(const Singleton &) {}
    Singleton &operator=(const Singleton &) {}

    int m_value;

protected:
    Singleton() {}
    virtual ~Singleton() {}

public:
    static T& getIncetance() {
        static T myInstance;
        return myInstance;
    }

    virtual void handle_req(std::shared_ptr<msg_struct_t> req) = 0;
    virtual void handle_res(std::shared_ptr<msg_struct_t> res) = 0;

    void testSingleton();
};