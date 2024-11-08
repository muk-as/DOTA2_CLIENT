#pragma once
#include "source2sdk/client/ArtyGameObjectID_t.hpp"
#include "source2sdk/client/ArtyGameObjectInstance_t.hpp"
#include "source2sdk/client/EArtyGameObjectType.hpp"
#include "source2sdk/client/EArtyHitboxType.hpp"
#include "source2sdk/client/EArtyLayer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xb0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataNodeType "1"
    #pragma pack(push, 1)
    struct ArtyGameObjectDef_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        client::ArtyGameObjectID_t m_unID; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/events/crownfall/artillery_graphics.vdata"
        CUtlString m_szGraphicsDef; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x20[0x8]; // 0x20
        CUtlString m_szDeathSound; // 0x28        
        client::EArtyHitboxType m_eHitboxType; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x3]; // 0x31
        Vector2D m_vHitboxMin; // 0x34        
        Vector2D m_vHitboxMax; // 0x3c        
        float m_flHitboxRadius; // 0x44        
        float m_flHitboxExtents; // 0x48        
        bool m_bInheritTransform; // 0x4c        
        bool m_bInheritRotation; // 0x4d        
        bool m_bInheritVisibility; // 0x4e        
        bool m_bInheritState; // 0x4f        
        bool m_bDestroyOnFallThrough; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        float m_flFallDamagePerVelocity; // 0x54        
        bool m_bDeathCausesExplosion; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x3]; // 0x59
        float m_flExplosionDamage; // 0x5c        
        float m_flExplosionRadius; // 0x60        
        float m_flExplosionTerrainRadius; // 0x64        
        float m_flGravityMult; // 0x68        
        float m_flDragMult; // 0x6c        
        float m_flWindMult; // 0x70        
        float m_flDeathMaxScaleFactor; // 0x74        
        bool m_bAllowPhysicsInDying; // 0x78        
        client::EArtyGameObjectType m_eType; // 0x79        
        [[maybe_unused]] std::uint8_t pad_0x7a[0x2]; // 0x7a
        client::EArtyLayer m_eLayer; // 0x7c        
        float m_flMaxHealth; // 0x80        
        float m_flHealth; // 0x84        
        bool m_bVisible; // 0x88        
        bool m_bCanCollide; // 0x89        
        bool m_bDoPhysics; // 0x8a        
        [[maybe_unused]] std::uint8_t pad_0x8b[0x1]; // 0x8b
        float m_flLifetime; // 0x8c        
        float m_flDieTime; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0x4]; // 0x94
        // m_vecChildren has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ArtyGameObjectInstance_t> m_vecChildren;
        char m_vecChildren[0x18]; // 0x98        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyGameObjectDef_t, m_unID) == 0x10);
    static_assert(offsetof(ArtyGameObjectDef_t, m_szGraphicsDef) == 0x18);
    static_assert(offsetof(ArtyGameObjectDef_t, m_szDeathSound) == 0x28);
    static_assert(offsetof(ArtyGameObjectDef_t, m_eHitboxType) == 0x30);
    static_assert(offsetof(ArtyGameObjectDef_t, m_vHitboxMin) == 0x34);
    static_assert(offsetof(ArtyGameObjectDef_t, m_vHitboxMax) == 0x3c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flHitboxRadius) == 0x44);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flHitboxExtents) == 0x48);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bInheritTransform) == 0x4c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bInheritRotation) == 0x4d);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bInheritVisibility) == 0x4e);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bInheritState) == 0x4f);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bDestroyOnFallThrough) == 0x50);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flFallDamagePerVelocity) == 0x54);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bDeathCausesExplosion) == 0x58);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flExplosionDamage) == 0x5c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flExplosionRadius) == 0x60);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flExplosionTerrainRadius) == 0x64);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flGravityMult) == 0x68);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flDragMult) == 0x6c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flWindMult) == 0x70);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flDeathMaxScaleFactor) == 0x74);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bAllowPhysicsInDying) == 0x78);
    static_assert(offsetof(ArtyGameObjectDef_t, m_eType) == 0x79);
    static_assert(offsetof(ArtyGameObjectDef_t, m_eLayer) == 0x7c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flMaxHealth) == 0x80);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flHealth) == 0x84);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bVisible) == 0x88);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bCanCollide) == 0x89);
    static_assert(offsetof(ArtyGameObjectDef_t, m_bDoPhysics) == 0x8a);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flLifetime) == 0x8c);
    static_assert(offsetof(ArtyGameObjectDef_t, m_flDieTime) == 0x90);
    static_assert(offsetof(ArtyGameObjectDef_t, m_vecChildren) == 0x98);
    
    static_assert(sizeof(ArtyGameObjectDef_t) == 0xb0);
};
