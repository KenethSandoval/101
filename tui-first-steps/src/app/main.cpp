#include "../lib/fontconfig.h"

auto main() -> int {
  fontconfig::FontConfig f;
  f.init();

  return 0;
}
