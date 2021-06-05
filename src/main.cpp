#include <fmt/color.h>

#include "basic.h"
#include "subdir/some_util.h"

int main(void)
{
    SomeUtil s;
    Basic b;

    fmt::print(fg(fmt::color::light_green) | fmt::emphasis::bold,
        "{}: {}\n", b.something(), s.sum(1,3));
}
