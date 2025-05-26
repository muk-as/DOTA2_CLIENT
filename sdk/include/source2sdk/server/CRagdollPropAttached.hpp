#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CRagdollProp.hpp"

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
        // Standard-layout class: false
        // Size: 0xcc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
        // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
        #pragma pack(push, 1)
        class CRagdollPropAttached : public source2sdk::server::CRagdollProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_boneIndexAttached; // 0xc80            
            // metadata: MNetworkEnable
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xc84            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointBoneSpace; // 0xc88            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointRagdollSpace; // 0xc94            
            bool m_bShouldDetach; // 0xca0            
            uint8_t _pad0ca1[0xf]; // 0xca1
            bool m_bShouldDeleteAttachedActivationRecord; // 0xcb0            
            uint8_t _pad0cb1[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollPropAttached) == 0xcc0);
    };
};
