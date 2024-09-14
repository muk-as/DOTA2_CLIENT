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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public client::CDOTA_Buff
    {
    public:
        // m_hCurrentAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentAbility;
        char m_hCurrentAbility[0x4]; // 0x16e8        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16ec        
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAbilities;
        char m_hAbilities[0x18]; // 0x16f0        
        Vector m_vLocation; // 0x1708        
        entity2::GameTime_t m_fChannelEnd; // 0x1714        
        bool m_bInterrupt; // 0x1718        
        bool m_bExpired; // 0x1719        
        [[maybe_unused]] std::uint8_t pad_0x171a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck) == 0x1720);
};
