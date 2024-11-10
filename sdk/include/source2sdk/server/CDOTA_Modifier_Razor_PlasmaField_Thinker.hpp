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
    // Size: 0x1778
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Razor_PlasmaField_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fLastRadius; // 0x1708        
        float m_fCurRadius; // 0x170c        
        entity2::GameTime_t m_fLastThink; // 0x1710        
        bool m_bContracting; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        server::CountdownTimer m_ViewerTimer; // 0x1718        
        client::ParticleIndex_t m_nFXIndex; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_EntitiesHit;
        char m_EntitiesHit[0x18]; // 0x1738        
        int32_t speed; // 0x1750        
        int32_t radius; // 0x1754        
        float damage_min; // 0x1758        
        float damage_max; // 0x175c        
        int32_t slow_min; // 0x1760        
        int32_t slow_max; // 0x1764        
        float slow_duration; // 0x1768        
        bool m_bHasCreatedFx; // 0x176c        
        [[maybe_unused]] std::uint8_t pad_0x176d[0x3]; // 0x176d
        float total_ability_time; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1774[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Razor_PlasmaField_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Razor_PlasmaField_Thinker) == 0x1778);
};
