#include "ProgramApi/Program.hpp"

namespace ProgramApi {

Program::Program ( nlohmann::json mainOptions )
{
}

void Program::addCommand ( nlohmann::json def, nlohmann::json options, std::function<bool()> callback)
{
}

}
