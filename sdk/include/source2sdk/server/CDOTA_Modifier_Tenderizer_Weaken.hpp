#pragma once
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tenderizer_Weaken : public server::CDOTA_Modifier_Stacking_Base
    {
    public:
        int32_t weaken_per_hit; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tenderizer_Weaken because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tenderizer_Weaken) == 0x1710);
};
