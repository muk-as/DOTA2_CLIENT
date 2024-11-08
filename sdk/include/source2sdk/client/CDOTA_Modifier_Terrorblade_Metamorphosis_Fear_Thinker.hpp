#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Terrorblade_Metamorphosis_Fear_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fLastRadius; // 0x1708        
        float m_fCurRadius; // 0x170c        
        entity2::GameTime_t m_fLastThink; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_EntitiesHit;
        char m_EntitiesHit[0x18]; // 0x1718        
        int32_t scepter_speed; // 0x1730        
        int32_t scepter_radius; // 0x1734        
        float damage; // 0x1738        
        bool m_bFirstThink; // 0x173c        
        [[maybe_unused]] std::uint8_t pad_0x173d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Metamorphosis_Fear_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Terrorblade_Metamorphosis_Fear_Thinker) == 0x1740);
};
