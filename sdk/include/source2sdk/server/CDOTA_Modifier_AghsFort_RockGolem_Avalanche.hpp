#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_RockGolem_Avalanche : public client::CDOTA_Buff
    {
    public:
        // m_pHeroesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_BaseNPC*> m_pHeroesHit;
        char m_pHeroesHit[0x18]; // 0x1708        
        int32_t radius; // 0x1720        
        float total_duration; // 0x1724        
        float stun_duration; // 0x1728        
        int32_t tick_count; // 0x172c        
        int32_t m_damage; // 0x1730        
        int32_t m_nTicks; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1738[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_RockGolem_Avalanche because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_RockGolem_Avalanche) == 0x1740);
};
