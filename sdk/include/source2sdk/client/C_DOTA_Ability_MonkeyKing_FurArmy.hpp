#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_MonkeyKing_FurArmy : public client::C_DOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x600        
        client::ParticleIndex_t m_nFXIndex; // 0x604        
        int32_t num_first_soldiers; // 0x608        
        int32_t num_second_soldiers; // 0x60c        
        bool m_bCreateMonkeys; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        entity2::GameTime_t m_flNextCreationTime; // 0x614        
        entity2::GameTime_t m_flScepterTime; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x61c[0x4]; // 0x61c
        // m_vecSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecSoldiers;
        char m_vecSoldiers[0x18]; // 0x620        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_MonkeyKing_FurArmy because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_MonkeyKing_FurArmy) == 0x638);
};
