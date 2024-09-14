#pragma once
#include "source2sdk/client/CModifierParams.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    // Size: 0x18d0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Mirror_Shield : public server::CDOTA_Buff_Item
    {
    public:
        client::CModifierParams m_LastParams; // 0x16e8        
        int32_t all_stats; // 0x18c0        
        int32_t reflect_chance; // 0x18c4        
        bool m_bProcSuccessful; // 0x18c8        
        [[maybe_unused]] std::uint8_t pad_0x18c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mirror_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Mirror_Shield) == 0x18d0);
};
