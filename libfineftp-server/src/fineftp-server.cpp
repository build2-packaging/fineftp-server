#include <fineftp/fineftp-server.h>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace fineftp_server
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
