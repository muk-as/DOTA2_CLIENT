#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Buff;
    };
};
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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Razor_StaticLink : public source2sdk::client::CDOTA_Buff
        {
        public:
            float flSmoothness; // 0x17f8            
            float drain_duration; // 0x17fc            
            std::int32_t drain_rate; // 0x1800            
            std::int32_t drain_range; // 0x1804            
            std::int32_t drain_range_buffer; // 0x1808            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x180c            
            std::int32_t m_iTotalDrainAmount; // 0x1810            
            std::int32_t pull_speed; // 0x1814            
            std::int32_t min_pull_range; // 0x1818            
            source2sdk::client::ParticleIndex_t m_iLinkIndex; // 0x181c            
            source2sdk::client::CDOTA_Buff* m_pBuffPositive; // 0x1820            
            source2sdk::client::CDOTA_Buff* m_pNegative; // 0x1828            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1830            
            uint8_t _pad1834[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StaticLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Razor_StaticLink) == 0x1840);
    };
};
