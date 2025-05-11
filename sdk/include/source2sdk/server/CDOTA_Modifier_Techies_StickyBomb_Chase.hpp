#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_StickyBomb_Chase : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t acceleration; // 0x17f8            
            std::int32_t m_nTeamNumber; // 0x17fc            
            float speed; // 0x1800            
            float pre_chase_time; // 0x1804            
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1808            
            Vector m_vStartPosition; // 0x180c            
            source2sdk::server::CountdownTimer m_MoveTime; // 0x1818            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StickyBomb_Chase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_StickyBomb_Chase) == 0x1830);
    };
};
