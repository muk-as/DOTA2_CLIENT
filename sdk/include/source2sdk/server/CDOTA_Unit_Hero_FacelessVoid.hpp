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
    // Size: 0x1e78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_FacelessVoid : public server::CDOTA_BaseNPC_Hero
    {
    public:
        Vector m_vecStanceDestinationPoint; // 0x1e68        
        [[maybe_unused]] std::uint8_t pad_0x1e74[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_FacelessVoid because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_FacelessVoid) == 0x1e78);
};
