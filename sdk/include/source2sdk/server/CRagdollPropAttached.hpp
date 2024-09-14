#pragma once
#include "source2sdk/server/CRagdollProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb78
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
    // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
    #pragma pack(push, 1)
    class CRagdollPropAttached : public server::CRagdollProp
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_boneIndexAttached; // 0xb38        
        // metadata: MNetworkEnable
        uint32_t m_ragdollAttachedObjectIndex; // 0xb3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointBoneSpace; // 0xb40        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointRagdollSpace; // 0xb4c        
        bool m_bShouldDetach; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0xf]; // 0xb59
        bool m_bShouldDeleteAttachedActivationRecord; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb69[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
    static_assert(sizeof(CRagdollPropAttached) == 0xb78);
};
