#pragma once

#include <data/WorldData.h>
#include <optional>
#include "world/Character.h"

class World {
    WorldData& data;
    explicit World(WorldData& data): data(data) {}
public:
    void initialize() const;
    [[nodiscard]] bool isRunning() const;
    [[nodiscard]] Character createCharacter() const;
    void setAvatar(const std::optional<Character> &character) const;
    [[nodiscard]] bool hasAvatar() const;
    void abandon() const;
    static World create(WorldData& data);
};