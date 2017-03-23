#ifndef ProgramApi_ArgumentParser_Hpp
#define ProgramApi_ArgumentParser_Hpp

#include <string>

#include "nlohmann/json.hpp"

namespace ProgramApi {

class ArgumentParser
{
public:
    typedef nlohmann::json Arguments;
    ArgumentParser (nlohmann::json defs);
    Arguments parseArgs ( int& index, int argc, char** argv );
protected:
    void defaultArgs ( Arguments& args);
    Arguments parseArg ( int& index, int argc, char** argv );
    virtual void error (std::string error);
    virtual void usage ();
    nlohmann::json m_definition;
    nlohmann::json m_short;
    nlohmann::json m_long;
};

}

#endif
