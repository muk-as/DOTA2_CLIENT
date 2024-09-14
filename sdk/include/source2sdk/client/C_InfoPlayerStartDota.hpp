#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
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
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    #pragma pack(push, 1)
    class C_InfoPlayerStartDota : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_InfoPlayerStartDota because it is not a standard-layout class
    static_assert(sizeof(C_InfoPlayerStartDota) == 0x540);
};
