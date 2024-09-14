#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Enchantress_NaturesAttendants : public client::CDOTA_Buff
    {
    public:
        float heal_interval; // 0x16e8        
        float heal; // 0x16ec        
        int32_t radius; // 0x16f0        
        int32_t movespeed; // 0x16f4        
        int32_t wisp_count; // 0x16f8        
        client::ParticleIndex_t m_nWispFXIndex; // 0x16fc        
        bool m_bAutoWisps; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_NaturesAttendants because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Enchantress_NaturesAttendants) == 0x1708);
};
