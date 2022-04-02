#ifndef RPG_TEXTRENDERSYSTEM_H
#define RPG_TEXTRENDERSYSTEM_H

#include "entt.hpp"
#include "../../../client/graphics/SpriteBatch.h"
#include "IRenderSubsystem.h"

class TextRenderSystem : public IRenderSubsystem
{
    entt::registry& m_registry;

public:
    TextRenderSystem(entt::registry& registry);

    virtual void draw(SpriteBatch& batch);
};

#endif // RPG_TEXTRENDERSYSTEM_H
