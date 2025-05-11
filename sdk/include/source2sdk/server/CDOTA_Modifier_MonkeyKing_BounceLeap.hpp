#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BounceLeap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float give_up_distance; // 0x17f8            
            float ground_jump_distance; // 0x17fc            
            float m_flZDelta; // 0x1800            
            float perched_day_vision; // 0x1804            
            float perched_night_vision; // 0x1808            
            Vector m_vStart; // 0x180c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1818            
            Vector m_vTargetPos; // 0x181c            
            float m_flSpeed; // 0x1828            
            bool m_bTargetingEntity; // 0x182c            
            bool m_bGroundToTree; // 0x182d            
            bool m_bTreeToGround; // 0x182e            
            bool m_bTreeToTree; // 0x182f            
            bool m_bIsSpringJump; // 0x1830            
            uint8_t _pad1831[0x3]; // 0x1831
            float m_fSpringChanneledPercent; // 0x1834            
            std::int32_t m_nLeapSpeed; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x183c            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x1840            
            uint8_t _pad1844[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x1848);
    };
};
