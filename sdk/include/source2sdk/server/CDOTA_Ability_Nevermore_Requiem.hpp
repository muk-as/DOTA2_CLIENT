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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nevermore_Requiem : public server::CDOTABaseAbility
    {
    public:
        int32_t requiem_line_width_start; // 0x5c8        
        int32_t requiem_line_width_end; // 0x5cc        
        int32_t m_nCachedSouls; // 0x5d0        
        client::ParticleIndex_t m_nFXIndex; // 0x5d4        
        int32_t m_nKilleater_nLines; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        // m_vecHeroesReqd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesReqd;
        char m_vecHeroesReqd[0x18]; // 0x5e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nevermore_Requiem because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nevermore_Requiem) == 0x5f8);
};
