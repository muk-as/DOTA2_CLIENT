#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
    #pragma pack(push, 1)
    class C_RagdollManager : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int8_t m_iCurrentMaxRagdollCount; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_RagdollManager because it is not a standard-layout class
    static_assert(sizeof(C_RagdollManager) == 0x540);
};
