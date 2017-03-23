#ifndef ProgramApi_Command_Hpp
#define ProgramApi_Command_Hpp

#include <string>

#include "nlohmann/json.hpp"

#include "ProgramApi/ArgumentParser.hpp"

namespace ProgramApi {

class Command : public ArgumentParser
{
public:
    Command (nlohmann::json defs,nlohmann::json opts);
    virtual bool process ( Arguments args ) = 0;
    virtual void usage ();
    nlohmann::json m_command;
};

}

#endif
