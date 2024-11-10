#pragma once
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
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
    // Size: 0x1838
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Announcer : public server::CDOTA_BaseNPC
    {
    public:
        int32_t m_iAudienceTeam; // 0x1830        
        [[maybe_unused]] std::uint8_t pad_0x1834[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Announcer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Announcer) == 0x1838);
};
