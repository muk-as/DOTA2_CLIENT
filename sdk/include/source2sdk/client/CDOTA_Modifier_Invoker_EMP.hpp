#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_EMP : public client::CDOTA_Buff
    {
    public:
        int32_t area_of_effect; // 0x1708        
        int32_t mana_burned; // 0x170c        
        float damage_per_mana; // 0x1710        
        float spell_lifesteal; // 0x1714        
        float spell_amp; // 0x1718        
        int32_t self_mana_restore_pct; // 0x171c        
        // m_hPullThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPullThinker;
        char m_hPullThinker[0x4]; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_EMP because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_EMP) == 0x1728);
};
