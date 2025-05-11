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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_Little_Friends_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17f8            
            std::int32_t m_nAlliesTaunted; // 0x17fc            
            bool m_bRelicTriggered; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            float radius; // 0x1804            
            std::int32_t damage_amplification; // 0x1808            
            std::int32_t damage_reduction; // 0x180c            
            float root_base_duration; // 0x1810            
            float root_per_target; // 0x1814            
            float max_root; // 0x1818            
            source2sdk::entity2::GameTime_t m_flLastSeen; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Little_Friends_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enchantress_Little_Friends_Aura) == 0x1820);
    };
};
