#pragma once
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/client/SurroundingBoundsType_t.hpp"
#include "source2sdk/client/VPhysicsCollisionAttribute_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "VPhysicsCollisionAttribute_t m_collisionAttribute"
    // static metadata: MNetworkVarNames "Vector m_vecMins"
    // static metadata: MNetworkVarNames "Vector m_vecMaxs"
    // static metadata: MNetworkVarNames "uint8 m_usSolidFlags"
    // static metadata: MNetworkVarNames "SolidType_t m_nSolidType"
    // static metadata: MNetworkVarNames "uint8 m_triggerBloat"
    // static metadata: MNetworkVarNames "SurroundingBoundsType_t m_nSurroundType"
    // static metadata: MNetworkVarNames "uint8 m_CollisionGroup"
    // static metadata: MNetworkVarNames "uint8 m_nEnablePhysics"
    // static metadata: MNetworkVarNames "Vector m_vecSpecifiedSurroundingMins"
    // static metadata: MNetworkVarNames "Vector m_vecSpecifiedSurroundingMaxs"
    // static metadata: MNetworkVarNames "Vector m_vCapsuleCenter1"
    // static metadata: MNetworkVarNames "Vector m_vCapsuleCenter2"
    // static metadata: MNetworkVarNames "float m_flCapsuleRadius"
    #pragma pack(push, 1)
    class CCollisionProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "CollisionAttributeChanged"
        client::VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateOBB"
        Vector m_vecMins; // 0x40        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateOBB"
        Vector m_vecMaxs; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x58[0x2]; // 0x58
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateSolidFlags"
        uint8_t m_usSolidFlags; // 0x5a        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateSolidType"
        client::SolidType_t m_nSolidType; // 0x5b        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
        uint8_t m_triggerBloat; // 0x5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
        client::SurroundingBoundsType_t m_nSurroundType; // 0x5d        
        // metadata: MNetworkEnable
        uint8_t m_CollisionGroup; // 0x5e        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateEnablePhysics"
        uint8_t m_nEnablePhysics; // 0x5f        
        float m_flBoundingRadius; // 0x60        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
        Vector m_vecSpecifiedSurroundingMins; // 0x64        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
        Vector m_vecSpecifiedSurroundingMaxs; // 0x70        
        Vector m_vecSurroundingMaxs; // 0x7c        
        Vector m_vecSurroundingMins; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateCapsule"
        Vector m_vCapsuleCenter1; // 0x94        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateCapsule"
        Vector m_vCapsuleCenter2; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpdateCapsule"
        float m_flCapsuleRadius; // 0xac        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCollisionProperty, m_collisionAttribute) == 0x10);
    static_assert(offsetof(CCollisionProperty, m_vecMins) == 0x40);
    static_assert(offsetof(CCollisionProperty, m_vecMaxs) == 0x4c);
    static_assert(offsetof(CCollisionProperty, m_usSolidFlags) == 0x5a);
    static_assert(offsetof(CCollisionProperty, m_nSolidType) == 0x5b);
    static_assert(offsetof(CCollisionProperty, m_triggerBloat) == 0x5c);
    static_assert(offsetof(CCollisionProperty, m_nSurroundType) == 0x5d);
    static_assert(offsetof(CCollisionProperty, m_CollisionGroup) == 0x5e);
    static_assert(offsetof(CCollisionProperty, m_nEnablePhysics) == 0x5f);
    static_assert(offsetof(CCollisionProperty, m_flBoundingRadius) == 0x60);
    static_assert(offsetof(CCollisionProperty, m_vecSpecifiedSurroundingMins) == 0x64);
    static_assert(offsetof(CCollisionProperty, m_vecSpecifiedSurroundingMaxs) == 0x70);
    static_assert(offsetof(CCollisionProperty, m_vecSurroundingMaxs) == 0x7c);
    static_assert(offsetof(CCollisionProperty, m_vecSurroundingMins) == 0x88);
    static_assert(offsetof(CCollisionProperty, m_vCapsuleCenter1) == 0x94);
    static_assert(offsetof(CCollisionProperty, m_vCapsuleCenter2) == 0xa0);
    static_assert(offsetof(CCollisionProperty, m_flCapsuleRadius) == 0xac);
    
    static_assert(sizeof(CCollisionProperty) == 0xb0);
};
