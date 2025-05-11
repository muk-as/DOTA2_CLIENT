#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hCurrentAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentAbility;
            char m_hCurrentAbility[0x4]; // 0x17f8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17fc            
            // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAbilities;
            char m_hAbilities[0x18]; // 0x1800            
            Vector m_vLocation; // 0x1818            
            source2sdk::entity2::GameTime_t m_fChannelEnd; // 0x1824            
            bool m_bInterrupt; // 0x1828            
            bool m_bExpired; // 0x1829            
            uint8_t _pad182a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck) == 0x1830);
    };
};
