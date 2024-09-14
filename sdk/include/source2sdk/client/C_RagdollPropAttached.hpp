#pragma once
#include "source2sdk/client/C_RagdollProp.hpp"
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
    // Standard-layout class: false
    // Size: 0xae8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
    // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
    #pragma pack(push, 1)
    class C_RagdollPropAttached : public client::C_RagdollProp
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_boneIndexAttached; // 0xab0        
        // metadata: MNetworkEnable
        uint32_t m_ragdollAttachedObjectIndex; // 0xab4        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointBoneSpace; // 0xab8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointRagdollSpace; // 0xac4        
        Vector m_vecOffset; // 0xad0        
        float m_parentTime; // 0xadc        
        bool m_bHasParent; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xae1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RagdollPropAttached because it is not a standard-layout class
    static_assert(sizeof(C_RagdollPropAttached) == 0xae8);
};
