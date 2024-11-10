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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_KeeperOfTheLight_Illuminate : public client::C_DOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x600        
        entity2::GameTime_t m_fStartTime; // 0x604        
        int32_t m_iProjectile; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x60c        
        client::ParticleIndex_t m_nFXIndexB; // 0x610        
        Vector m_vPos; // 0x614        
        int32_t total_damage; // 0x620        
        bool m_bStarted; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x625[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_KeeperOfTheLight_Illuminate because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_KeeperOfTheLight_Illuminate) == 0x628);
};
