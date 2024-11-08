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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Jakiro_LiquidFire : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
        int32_t radius; // 0x1728        
        client::ParticleIndex_t m_nFXIndex; // 0x172c        
        bool double_head; // 0x1730        
        bool m_bForceProc; // 0x1731        
        [[maybe_unused]] std::uint8_t pad_0x1732[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_LiquidFire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Jakiro_LiquidFire) == 0x1738);
};
