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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active : public client::CDOTA_Buff
    {
    public:
        int32_t scepter_move_speed_pct; // 0x16e8        
        int32_t scepter_attack_speed; // 0x16ec        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16f0        
        bool m_bPassive; // 0x16f4        
        bool m_bKillAtEnd; // 0x16f5        
        [[maybe_unused]] std::uint8_t pad_0x16f6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active) == 0x16f8);
};
