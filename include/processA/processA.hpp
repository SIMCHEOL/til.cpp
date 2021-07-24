#include "Singleton.hpp"

class processA : public Singleton<processA> {
public:
    virtual void handle_req(std::shared_ptr<msg_struct_t> req);
    virtual void handle_res(std::shared_ptr<msg_struct_t> res);

protected:
    processA() {}

private:
    virtual ~processA();

};