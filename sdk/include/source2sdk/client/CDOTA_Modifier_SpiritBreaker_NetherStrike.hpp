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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SpiritBreaker_NetherStrike : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        bool m_bStrikeLanded; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        Vector m_vCastLocation; // 0x1710        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_NetherStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SpiritBreaker_NetherStrike) == 0x1720);
};
