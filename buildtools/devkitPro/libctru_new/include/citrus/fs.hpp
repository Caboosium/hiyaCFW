#pragma once

#include "citrus/types.hpp"

#include <vector>

namespace ctr {
    namespace fs {
        typedef enum {
            NAND = 0,
            SD = 1
        } MediaType;

        u64 freeSpace(MediaType mediaType);

        bool exists(const std::string path);
        bool directory(const std::string path);
        const std::string fileName(const std::string path);
        const std::string extension(const std::string path);
        bool hasExtension(const std::string path, const std::string extension);
        bool hasExtensions(const std::string path, const std::vector<std::string> extensions);
        std::vector<std::string> contents(const std::string directory, bool directories = true, const std::vector<std::string> extensions = {});
    }
}