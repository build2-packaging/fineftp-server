#pragma once

#include <iosfwd>
#include <string>

#include <fineftp/export.h>

namespace fineftp_server
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  FINEFTP_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
