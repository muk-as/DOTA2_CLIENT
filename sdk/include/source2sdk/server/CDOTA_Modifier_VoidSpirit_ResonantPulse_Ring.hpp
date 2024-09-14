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
    class CDOTA_Modifier_VoidSpirit_ResonantPulse_Ring : public client::CDOTA_Buff
    {
    public:
        float m_fLastRadius; // 0x16e8        
        float m_fCurRadius; // 0x16ec        
        entity2::GameTime_t m_fLastThink; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesHit;
        char m_EntitiesHit[0x18]; // 0x16f8        
        int32_t speed; // 0x1710        
        int32_t radius; // 0x1714        
        int32_t damage; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_ResonantPulse_Ring because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_ResonantPulse_Ring) == 0x1720);
};
