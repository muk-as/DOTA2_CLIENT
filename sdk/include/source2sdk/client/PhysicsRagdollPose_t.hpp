#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CTransform m_Transforms"
        // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
        #pragma pack(push, 1)
        struct PhysicsRagdollPose_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnTransformChanged"
            // m_Transforms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CTransform> m_Transforms;
            char m_Transforms[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x_]; // 0x_            
            bool m_bSetFromDebugHistory; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PhysicsRagdollPose_t, m_Transforms) == 0x_);
        static_assert(offsetof(source2sdk::client::PhysicsRagdollPose_t, m_hOwner) == 0x_);
        static_assert(offsetof(source2sdk::client::PhysicsRagdollPose_t, m_bSetFromDebugHistory) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PhysicsRagdollPose_t) == 0x_);
    };
};
