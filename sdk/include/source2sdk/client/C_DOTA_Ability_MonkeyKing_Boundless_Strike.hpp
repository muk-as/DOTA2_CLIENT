#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_MonkeyKing_Boundless_Strike : public client::C_DOTABaseAbility
    {
    public:
        int32_t strike_cast_range; // 0x5d8        
        int32_t strike_radius; // 0x5dc        
        int32_t spring_channel_pct; // 0x5e0        
        client::ParticleIndex_t m_nFXIndex; // 0x5e4        
        bool m_bIsAltCastState; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x7]; // 0x5e9
        // struckEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_DOTA_BaseNPC*> struckEntities;
        char struckEntities[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_MonkeyKing_Boundless_Strike because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_MonkeyKing_Boundless_Strike) == 0x608);
};
