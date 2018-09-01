#pragma once

#include <kaguya/kaguya.hpp>

#include <Config.hpp>
#include <Types/Global.hpp>

namespace obe::Script
{
    /**
    * \brief Lua VM used everywhere in the code
    */
    GLOBE(6, ScriptEngine, kaguya::State);
    /**
    * \brief Initialize the Lua VM
    */
    void InitScriptEngine();
    /**
    * \brief Creates a new Lua environment and return the index (id) of the new environment
    * \return The index (id) of the new environment
    */
    unsigned int CreateNewEnvironment();
    /**
    * \brief Executes a Lua source file on the given environment
    * \param envIndex Environment index where to execute the Lua file
    * \param file Path to the Lua source file
    */
    void executeFile(unsigned int envIndex, const std::string& file);

    /**
    * \brief Executes a Lua string on the given environment
    * \param envIndex Environment index where to execute the Lua string
    * \param string Lua String to execute
    */
    void executeString(unsigned int envIndex, const std::string& string);
}