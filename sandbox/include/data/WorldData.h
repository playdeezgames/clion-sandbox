#pragma once
#include <optional>
#include <vector>
#include <data/CharacterData.h>

class WorldData {
public:
    std::optional<size_t> avatarId;
    std::vector<CharacterData> characters{};
};

