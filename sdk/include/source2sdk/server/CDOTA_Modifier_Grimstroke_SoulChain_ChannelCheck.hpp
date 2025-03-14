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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public client::CDOTA_Buff
    {
    public:
        // m_hCurrentAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentAbility;
        char m_hCurrentAbility[0x4]; // 0x1708        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x170c        
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAbilities;
        char m_hAbilities[0x18]; // 0x1710        
        Vector m_vLocation; // 0x1728        
        entity2::GameTime_t m_fChannelEnd; // 0x1734        
        bool m_bInterrupt; // 0x1738        
        bool m_bExpired; // 0x1739        
        [[maybe_unused]] std::uint8_t pad_0x173a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck) == 0x1740);
};
