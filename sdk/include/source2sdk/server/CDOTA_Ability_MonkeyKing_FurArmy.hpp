#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_MonkeyKing_FurArmy : public server::CDOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5a0        
        client::ParticleIndex_t m_nFXIndex; // 0x5a4        
        int32_t num_first_soldiers; // 0x5a8        
        int32_t num_second_soldiers; // 0x5ac        
        bool m_bCreateMonkeys; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b1[0x3]; // 0x5b1
        entity2::GameTime_t m_flNextCreationTime; // 0x5b4        
        entity2::GameTime_t m_flScepterTime; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // m_vecSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecSoldiers;
        char m_vecSoldiers[0x18]; // 0x5c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_MonkeyKing_FurArmy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_MonkeyKing_FurArmy) == 0x5d8);
};
