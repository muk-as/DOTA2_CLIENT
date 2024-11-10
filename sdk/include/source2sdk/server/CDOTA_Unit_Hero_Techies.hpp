#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1e98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Techies : public server::CDOTA_BaseNPC_Hero
    {
    public:
        bool m_bLastDeathFromSuicide; // 0x1e90        
        [[maybe_unused]] std::uint8_t pad_0x1e91[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Techies because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Techies) == 0x1e98);
};
