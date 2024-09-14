#pragma once
#include "source2sdk/client/CAnnouncerDescriptor.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC.hpp"
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
    // Size: 0x1830
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Announcer : public client::C_DOTA_BaseNPC
    {
    public:
        client::CAnnouncerDescriptor m_currentAnnouncer; // 0x1800        
        [[maybe_unused]] std::uint8_t pad_0x1828[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Announcer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Announcer) == 0x1830);
};
