#include "Singleton.hpp"

class processB : public Singleton<processB>  {
public:
    virtual void handle_req(std::shared_ptr<msg_struct_t> req);
    virtual void handle_res(std::shared_ptr<msg_struct_t> res);
    
protected:
    processB() {}

private:
    virtual ~processB();

};