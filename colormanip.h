//
// Created by vzhur on 24.06.2023.
//

#ifndef L55_STACK_SET_MAP_COLORMANIP_H
#define L55_STACK_SET_MAP_COLORMANIP_H

#include <cstdint>
#include <string>
#include <regex>

namespace color {

    class color_exception : std::exception {
        const char *what_str_;

        const char *what() const noexcept {
            return what_str_;
        }

    public:
        explicit color_exception(const char *e) : what_str_(e) {}
    };

    struct Color {
        uint8_t r, g, b;

        explicit Color(const std::string &color) {
            const std::regex color_regex("^#[0-9a-fA-Z]{6}$");
            std::cmatch math;
            if (!std::regex_match(color.c_str(), math, color_regex)) {
                throw color_exception("non-hex color format");
            }
            r = std::stol("0x" + color.substr(1, 2), nullptr, 16);
            g = std::stol("0x" + color.substr(3, 2), nullptr, 16);
            b = std::stol("0x" + color.substr(5, 2), nullptr, 16);
        }

        Color(uint8_t red, uint8_t green, uint8_t blue) : r(red), g(green), b(blue) {}
    };

    inline std::string set_color(uint8_t r, uint8_t g, uint8_t b) {
        return "\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m";
    }

    inline std::string set_color(const std::string &color) {
        Color character(color);
        return set_color(character.r, character.g, character.b);
    }

    inline std::string set_backgroung(uint8_t r, uint8_t g, uint8_t b) {
        return "\033[48;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m";
    }

    inline std::string set_backgroung(const std::string &color) {
        Color background(color);
        return set_backgroung(background.r, background.g, background.b);
    }

    inline std::string set_default() {
        return "\033[0m";
    }

}

#endif //L55_STACK_SET_MAP_COLORMANIP_H
