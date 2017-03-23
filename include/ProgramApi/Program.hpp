#ifndef ProgramApi_Program_Hpp
#define ProgramApi_Program_Hpp

#include <string>

#include "nlohmann/json.hpp"

#include "ProgramApi/ArgumentParser.hpp"

namespace ProgramApi {

class Program
{
public:
    class ProgramData {};
    Program ( nlohmann::json mainOptions );
    void addCommand ( nlohmann::json def, nlohmann::json options, std::function<bool()> callback);
};

}

#endif
