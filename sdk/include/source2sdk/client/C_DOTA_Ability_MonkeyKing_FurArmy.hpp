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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_MonkeyKing_FurArmy : public client::C_DOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5d8        
        client::ParticleIndex_t m_nFXIndex; // 0x5dc        
        int32_t num_first_soldiers; // 0x5e0        
        int32_t num_second_soldiers; // 0x5e4        
        bool m_bCreateMonkeys; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        entity2::GameTime_t m_flNextCreationTime; // 0x5ec        
        entity2::GameTime_t m_flScepterTime; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // m_vecSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecSoldiers;
        char m_vecSoldiers[0x18]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_MonkeyKing_FurArmy because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_MonkeyKing_FurArmy) == 0x610);
};
