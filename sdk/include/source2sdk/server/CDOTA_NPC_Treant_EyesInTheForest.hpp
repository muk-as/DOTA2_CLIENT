#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_NPC_Treant_EyesInTheForest : public server::CDOTA_BaseNPC_Additive
    {
    public:
        bool m_bIsBlind; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1811[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPC_Treant_EyesInTheForest because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPC_Treant_EyesInTheForest) == 0x1818);
};
