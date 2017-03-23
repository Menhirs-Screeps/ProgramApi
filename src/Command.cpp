#include "ProgramApi/Command.hpp"

namespace ProgramApi {

Command::Command (nlohmann::json defs,nlohmann::json opts) :
    ArgumentParser ( opts ),
    m_command ( defs )
{
}

void Command::usage ()
{
    std::clog << m_command["name"].get<std::string> () << ": " << m_command["help"].get<std::string> () << std::endl;
    ArgumentParser::usage ();
}

}
