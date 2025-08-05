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
        // Size: 0xc90
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
            std::uint32_t m_boneIndexAttached; // 0xc50            
            // metadata: MNetworkEnable
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xc54            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointBoneSpace; // 0xc58            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointRagdollSpace; // 0xc64            
            bool m_bShouldDetach; // 0xc70            
            uint8_t _pad0c71[0xf]; // 0xc71
            bool m_bShouldDeleteAttachedActivationRecord; // 0xc80            
            uint8_t _pad0c81[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollPropAttached) == 0xc90);
    };
};
