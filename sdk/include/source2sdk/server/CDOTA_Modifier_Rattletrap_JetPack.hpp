#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1768
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_JetPack : public client::CDOTA_Buff
    {
    public:
        int32_t m_nMovementSpeed; // 0x16e8        
        int32_t bonus_speed; // 0x16ec        
        float turn_rate; // 0x16f0        
        entity2::GameTime_t m_flStartTime; // 0x16f4        
        float tick_interval; // 0x16f8        
        float m_flFacingTarget; // 0x16fc        
        client::ParticleIndex_t m_nFXIndex; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flTurnHistory;
        char m_flTurnHistory[0x18]; // 0x1708        
        // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesHitLastRicochet;
        char m_vecHeroesHitLastRicochet[0x18]; // 0x1720        
        // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesCredited;
        char m_vecHeroesCredited[0x18]; // 0x1738        
        // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHeroesHitCurrentRicochet;
        char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_JetPack because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_JetPack) == 0x1768);
};
