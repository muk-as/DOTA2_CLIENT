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
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_HiddenDisplacement"
    #pragma pack(push, 1)
    class C_DOTA_DisplacementVisibility : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_HiddenDisplacement; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_DisplacementVisibility because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_DisplacementVisibility) == 0x540);
};
