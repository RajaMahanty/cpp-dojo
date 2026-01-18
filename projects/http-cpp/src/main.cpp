#include "../includes/httplib.h"
#include <iostream>
int main()
{
  httplib::Server svr;
  svr.Get("/", [](auto &, auto &res)
          { res.set_content("Hello", "text/plain"); });
  svr.listen("0.0.0.0", 8080);
}
