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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_Flamethrower : public client::CDOTA_Buff
    {
    public:
        int32_t length; // 0x16e8        
        int32_t width; // 0x16ec        
        int32_t damage_per_second; // 0x16f0        
        client::ParticleIndex_t m_nBeamFXIndex; // 0x16f4        
        // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBeamEnd;
        char m_hBeamEnd[0x4]; // 0x16f8        
        entity2::GameTime_t m_flLastHit; // 0x16fc        
        // m_vecBurningTrees has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CBaseEntity*> m_vecBurningTrees;
        char m_vecBurningTrees[0x18]; // 0x1700        
        // m_hTreeFireThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTreeFireThinker;
        char m_hTreeFireThinker[0x4]; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Flamethrower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_Flamethrower) == 0x1720);
};
