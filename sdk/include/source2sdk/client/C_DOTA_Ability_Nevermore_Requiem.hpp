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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Nevermore_Requiem : public client::C_DOTABaseAbility
    {
    public:
        int32_t requiem_line_width_start; // 0x600        
        int32_t requiem_line_width_end; // 0x604        
        int32_t m_nCachedSouls; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x60c        
        int32_t m_nKilleater_nLines; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // m_vecHeroesReqd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHeroesReqd;
        char m_vecHeroesReqd[0x18]; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Nevermore_Requiem because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Nevermore_Requiem) == 0x630);
};
