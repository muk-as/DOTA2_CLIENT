#pragma once
#include "source2sdk/server/CDOTA_Modifier_Fear.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_Debuff_Fear : public server::CDOTA_Modifier_Fear
    {
    public:
        bool m_bDidGiveOrder; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Debuff_Fear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_Debuff_Fear) == 0x16f0);
};