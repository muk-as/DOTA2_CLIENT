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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fDamage; // 0x1708        
        float m_fLastRadius; // 0x170c        
        float m_fCurRadius; // 0x1710        
        entity2::GameTime_t m_fLastThink; // 0x1714        
        bool m_bContracting; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x7]; // 0x1719
        server::CountdownTimer m_ViewerTimer; // 0x1720        
        client::ParticleIndex_t m_nFXIndex; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4]; // 0x173c
        // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesHit;
        char m_EntitiesHit[0x18]; // 0x1740        
        int32_t speed; // 0x1758        
        int32_t radius; // 0x175c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x1760);
};
