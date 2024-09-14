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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Weaver_Swarm_Debuff : public client::CDOTA_Buff
    {
    public:
        float armor_reduction; // 0x16e8        
        int32_t damage; // 0x16ec        
        int32_t experience_gain; // 0x16f0        
        float m_flCurrentArmorReduction; // 0x16f4        
        // m_hSwarmBug has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSwarmBug;
        char m_hSwarmBug[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Swarm_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_Swarm_Debuff) == 0x1700);
};
