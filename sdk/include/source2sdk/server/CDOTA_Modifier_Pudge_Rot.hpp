#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Rot : public client::CDOTA_Buff
    {
    public:
        int32_t rot_damage; // 0x16e8        
        int32_t rot_slow; // 0x16ec        
        int32_t scepter_rot_regen_reduction_pct; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x8]; // 0x16f4
        entity2::GameTime_t m_flLastRotTime; // 0x16fc        
        bool m_bQualifiesAsPotentionalDeny; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Rot) == 0x1708);
};
