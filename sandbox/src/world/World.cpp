#include <world/World.h>

void World::initialize() const {
    setAvatar(createCharacter());
}

bool World::isRunning() const {
    return hasAvatar();
}

World World::create(WorldData &data) {
    return World(data);
}

void World::setAvatar(const std::optional<Character> &character) const {
    if (character.has_value()) {
        data.avatarId = character.value().getId();
    }else {
        data.avatarId = std::nullopt;
    }
}

Character World::createCharacter() const {
    const auto characterId = data.characters.size();
    constexpr CharacterData characterData{};
    data.characters.push_back(characterData);
    return Character::create(this->data, characterId);
}

bool World::hasAvatar() const {
    return data.avatarId != std::nullopt;
}

void World::abandon() const{
    setAvatar(std::nullopt);
}