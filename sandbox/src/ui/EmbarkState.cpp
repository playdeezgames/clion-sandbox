#include <bits/ranges_base.h>
#include <ui/EmbarkState.h>

#include "data/WorldData.h"
#include "world/World.h"
#include "ui/NeutralState.h"

void EmbarkState::run() {
    WorldData worldData{};
    World world = World::create(worldData);
    world.initialize();
    while (world.isRunning()) {
        NeutralState::run(world);
    }
}
