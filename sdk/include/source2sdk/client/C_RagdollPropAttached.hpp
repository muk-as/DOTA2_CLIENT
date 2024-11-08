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
    // Size: 0xb30
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        uint32_t m_boneIndexAttached; // 0xaf8        
        // metadata: MNetworkEnable
        uint32_t m_ragdollAttachedObjectIndex; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointBoneSpace; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointRagdollSpace; // 0xb0c        
        Vector m_vecOffset; // 0xb18        
        float m_parentTime; // 0xb24        
        bool m_bHasParent; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb29[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RagdollPropAttached because it is not a standard-layout class
    static_assert(sizeof(C_RagdollPropAttached) == 0xb30);
};
