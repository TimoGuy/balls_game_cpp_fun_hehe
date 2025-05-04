#pragma once

#include <cstdint>
#include <string>


namespace hawsoo
{

using std::string;

struct Dimension2D
{
    uint32_t width;
    uint32_t height;
};

struct Settings
{
    Dimension2D renderer_size{ 1024, 576 };

    string app_name{ "Made with HSGE2" };
};
extern Settings s_settings;

}  // namespace hawsoo