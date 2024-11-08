#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PoisonNova_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x1708        
        entity2::GameTime_t m_fLastThink; // 0x170c        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x1710        
        int32_t speed; // 0x1728        
        int32_t radius; // 0x172c        
        int32_t start_radius; // 0x1730        
        float duration; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PoisonNova_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PoisonNova_Thinker) == 0x1738);
};
