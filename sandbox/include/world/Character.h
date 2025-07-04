#pragma once

#include "data/WorldData.h"

class Character {
private:
    WorldData& data;
    size_t characterId;
    explicit Character(WorldData& data, const size_t characterId):
        data(data),
        characterId(characterId) {    }
public:
    static Character create(WorldData& data, size_t characterId) {
        return Character(data, characterId);
    }
    [[nodiscard]] size_t getId() const { return characterId; }
};