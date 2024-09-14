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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Oracle_FortunesEnd : public server::CDOTABaseAbility
    {
    public:
        int32_t damage; // 0x5a0        
        float radius; // 0x5a4        
        int32_t bolt_speed; // 0x5a8        
        float maximum_purge_duration; // 0x5ac        
        float minimum_purge_duration; // 0x5b0        
        bool purge_constantly; // 0x5b4        
        [[maybe_unused]] std::uint8_t pad_0x5b5[0x3]; // 0x5b5
        entity2::GameTime_t m_flStartTime; // 0x5b8        
        float m_flDuration; // 0x5bc        
        float m_flDamage; // 0x5c0        
        bool m_bAbsorbed; // 0x5c4        
        [[maybe_unused]] std::uint8_t pad_0x5c5[0x3]; // 0x5c5
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5c8        
        client::ParticleIndex_t m_nFXIndex; // 0x5cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Oracle_FortunesEnd because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Oracle_FortunesEnd) == 0x5d0);
};
