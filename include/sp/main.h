/*
    CONTRIBUTORS:
        Sean Pesce

*/
#pragma once

#ifndef SP_PROJECT_CORE_H_
#define SP_PROJECT_CORE_H_

#include "sp/sp.h"
#include "sp/dx/dx_main.h"
#include "sp/io/cmd_ostream.h"

namespace global {


namespace lib    {
// Wrapped library type
extern sp::dx::library type;
// Starting address of the wrapped library
extern HMODULE chain;
// Filename of the wrapped library
extern std::string chain_filename;
// Loads chained library (if one was specified)
bool load_chain();
// Loads shared system copy of the wrapped library
bool load_shared_library();
bool hook_exports();
} // namespace lib

extern sp::io::cmd_ostream& cmd_out;


void initialize();


} // namespace global



#endif // SP_PROJECT_CORE_H_
