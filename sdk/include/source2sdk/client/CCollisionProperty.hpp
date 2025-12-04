#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/client/SurroundingBoundsType_t.hpp"
#include "source2sdk/client/VPhysicsCollisionAttribute_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "CollisionAttributeChanged"
            source2sdk::client::VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateOBB"
            Vector m_vecMins; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateOBB"
            Vector m_vecMaxs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateSolidFlags"
            std::uint8_t m_usSolidFlags; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateSolidType"
            source2sdk::client::SolidType_t m_nSolidType; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
            std::uint8_t m_triggerBloat; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
            source2sdk::client::SurroundingBoundsType_t m_nSurroundType; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_CollisionGroup; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateEnablePhysics"
            std::uint8_t m_nEnablePhysics; // 0x_            
            float m_flBoundingRadius; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
            Vector m_vecSpecifiedSurroundingMins; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "MarkSurroundingBoundsDirty"
            Vector m_vecSpecifiedSurroundingMaxs; // 0x_            
            Vector m_vecSurroundingMaxs; // 0x_            
            Vector m_vecSurroundingMins; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateCapsule"
            Vector m_vCapsuleCenter1; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateCapsule"
            Vector m_vCapsuleCenter2; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpdateCapsule"
            float m_flCapsuleRadius; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_collisionAttribute) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecMins) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecMaxs) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_usSolidFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_nSolidType) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_triggerBloat) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_nSurroundType) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_CollisionGroup) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_nEnablePhysics) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_flBoundingRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecSpecifiedSurroundingMins) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecSpecifiedSurroundingMaxs) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecSurroundingMaxs) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vecSurroundingMins) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vCapsuleCenter1) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_vCapsuleCenter2) == 0x_);
        static_assert(offsetof(source2sdk::client::CCollisionProperty, m_flCapsuleRadius) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCollisionProperty) == 0x_);
    };
};
