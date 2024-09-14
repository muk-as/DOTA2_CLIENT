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
    class C_BaseEntity;
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
    class C_DOTA_Ability_Nevermore_Requiem : public client::C_DOTABaseAbility
    {
    public:
        int32_t requiem_line_width_start; // 0x5d8        
        int32_t requiem_line_width_end; // 0x5dc        
        int32_t m_nCachedSouls; // 0x5e0        
        client::ParticleIndex_t m_nFXIndex; // 0x5e4        
        int32_t m_nKilleater_nLines; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // m_vecHeroesReqd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHeroesReqd;
        char m_vecHeroesReqd[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nevermore_Requiem because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nevermore_Requiem) == 0x608);
};
