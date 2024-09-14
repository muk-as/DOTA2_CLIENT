#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fDamage; // 0x16e8        
        float m_fLastRadius; // 0x16ec        
        float m_fCurRadius; // 0x16f0        
        entity2::GameTime_t m_fLastThink; // 0x16f4        
        bool m_bContracting; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7]; // 0x16f9
        server::CountdownTimer m_ViewerTimer; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesHit;
        char m_EntitiesHit[0x18]; // 0x1720        
        int32_t speed; // 0x1738        
        int32_t radius; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x1740);
};
