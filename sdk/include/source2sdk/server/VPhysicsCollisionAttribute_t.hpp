#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "uint64 m_nInteractsAs"
        // static metadata: MNetworkVarNames "uint64 m_nInteractsWith"
        // static metadata: MNetworkVarNames "uint64 m_nInteractsExclude"
        // static metadata: MNetworkVarNames "uint32 m_nEntityId"
        // static metadata: MNetworkVarNames "uint32 m_nOwnerId"
        // static metadata: MNetworkVarNames "uint16 m_nHierarchyId"
        // static metadata: MNetworkVarNames "uint16 m_nDetailLayerMask"
        // static metadata: MNetworkVarNames "uint8 m_nDetailLayerMaskType"
        // static metadata: MNetworkVarNames "uint8 m_nTargetDetailLayer"
        // static metadata: MNetworkVarNames "uint8 m_nCollisionGroup"
        // static metadata: MNetworkVarNames "uint8 m_nCollisionFunctionMask"
        #pragma pack(push, 1)
        struct VPhysicsCollisionAttribute_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsAs; // 0x_            
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsWith; // 0x_            
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsExclude; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nEntityId; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nOwnerId; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_nHierarchyId; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_nDetailLayerMask; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nDetailLayerMaskType; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nTargetDetailLayer; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nCollisionGroup; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nCollisionFunctionMask; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nInteractsAs) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nInteractsWith) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nInteractsExclude) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nEntityId) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nOwnerId) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nHierarchyId) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nDetailLayerMask) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nDetailLayerMaskType) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nTargetDetailLayer) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nCollisionGroup) == 0x_);
        static_assert(offsetof(source2sdk::server::VPhysicsCollisionAttribute_t, m_nCollisionFunctionMask) == 0x_);
        
        static_assert(sizeof(source2sdk::server::VPhysicsCollisionAttribute_t) == 0x_);
    };
};
