#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Leshrac_Lightning_Storm : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1878            
            float radius; // 0x187c            
            std::int32_t jump_count; // 0x1880            
            float slow_duration; // 0x1884            
            float jump_delay; // 0x1888            
            // hInitialTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hInitialTarget;
            char hInitialTarget[0x4]; // 0x188c            
            float m_flDamage; // 0x1890            
            std::int32_t m_iCurJumpCount; // 0x1894            
            Vector m_vCurTargetLoc; // 0x1898            
            uint8_t _pad18a4[0x4]; // 0x18a4
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x18a8            
            bool m_bGrantedGem; // 0x18c0            
            bool m_bBounceTwice; // 0x18c1            
            uint8_t _pad18c2[0x2]; // 0x18c2
            // m_eLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_eLastTarget;
            char m_eLastTarget[0x4]; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Leshrac_Lightning_Storm) == 0x18c8);
    };
};
