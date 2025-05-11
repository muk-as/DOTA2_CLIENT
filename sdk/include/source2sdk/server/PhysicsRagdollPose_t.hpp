#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CTransform m_Transforms"
        // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
        #pragma pack(push, 1)
        struct PhysicsRagdollPose_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnTransformChanged"
            // m_Transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CTransform> m_Transforms;
            char m_Transforms[0x18]; // 0x8            
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PhysicsRagdollPose_t, m_Transforms) == 0x8);
        static_assert(offsetof(source2sdk::server::PhysicsRagdollPose_t, m_hOwner) == 0x20);
        
        static_assert(sizeof(source2sdk::server::PhysicsRagdollPose_t) == 0x28);
    };
};
