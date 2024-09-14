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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_EMP : public client::CDOTA_Buff
    {
    public:
        int32_t area_of_effect; // 0x16e8        
        int32_t mana_burned; // 0x16ec        
        float damage_per_mana; // 0x16f0        
        float spell_lifesteal; // 0x16f4        
        float spell_amp; // 0x16f8        
        int32_t self_mana_restore_pct; // 0x16fc        
        // m_hPullThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPullThinker;
        char m_hPullThinker[0x4]; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_EMP because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_EMP) == 0x1708);
};
