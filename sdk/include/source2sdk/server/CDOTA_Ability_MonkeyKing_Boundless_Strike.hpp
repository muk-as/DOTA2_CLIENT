#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_MonkeyKing_Boundless_Strike : public server::CDOTABaseAbility
    {
    public:
        int32_t strike_cast_range; // 0x5a0        
        int32_t strike_radius; // 0x5a4        
        int32_t spring_channel_pct; // 0x5a8        
        client::ParticleIndex_t m_nFXIndex; // 0x5ac        
        bool m_bIsAltCastState; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b1[0x7]; // 0x5b1
        // struckEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_BaseNPC*> struckEntities;
        char struckEntities[0x18]; // 0x5b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_MonkeyKing_Boundless_Strike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_MonkeyKing_Boundless_Strike) == 0x5d0);
};
