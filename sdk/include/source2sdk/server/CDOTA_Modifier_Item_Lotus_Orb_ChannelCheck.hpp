#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hCurrentAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentAbility;
            char m_hCurrentAbility[0x4]; // 0x1878            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x187c            
            Vector m_vLocation; // 0x1880            
            source2sdk::entity2::GameTime_t m_fChannelEnd; // 0x188c            
            bool m_bInterrupt; // 0x1890            
            bool m_bExpired; // 0x1891            
            uint8_t _pad1892[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck) == 0x1898);
    };
};
