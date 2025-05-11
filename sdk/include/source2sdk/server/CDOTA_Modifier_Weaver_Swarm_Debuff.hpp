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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Weaver_Swarm_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float armor_reduction; // 0x17f8            
            std::int32_t damage; // 0x17fc            
            std::int32_t experience_gain; // 0x1800            
            float m_flCurrentArmorReduction; // 0x1804            
            // m_hSwarmBug has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSwarmBug;
            char m_hSwarmBug[0x4]; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Swarm_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Weaver_Swarm_Debuff) == 0x1810);
    };
};
