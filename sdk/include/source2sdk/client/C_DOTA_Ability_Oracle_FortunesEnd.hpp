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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Oracle_FortunesEnd : public client::C_DOTABaseAbility
    {
    public:
        int32_t damage; // 0x600        
        float radius; // 0x604        
        int32_t bolt_speed; // 0x608        
        float maximum_purge_duration; // 0x60c        
        float minimum_purge_duration; // 0x610        
        bool purge_constantly; // 0x614        
        [[maybe_unused]] std::uint8_t pad_0x615[0x3]; // 0x615
        entity2::GameTime_t m_flStartTime; // 0x618        
        float m_flDuration; // 0x61c        
        float m_flDamage; // 0x620        
        bool m_bAbsorbed; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x625[0x3]; // 0x625
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x628        
        client::ParticleIndex_t m_nFXIndex; // 0x62c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Oracle_FortunesEnd because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Oracle_FortunesEnd) == 0x630);
};
