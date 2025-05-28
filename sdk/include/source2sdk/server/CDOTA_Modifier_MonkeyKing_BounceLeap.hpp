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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BounceLeap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float give_up_distance; // 0x1888            
            float ground_jump_distance; // 0x188c            
            float m_flZDelta; // 0x1890            
            float perched_day_vision; // 0x1894            
            float perched_night_vision; // 0x1898            
            Vector m_vStart; // 0x189c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18a8            
            Vector m_vTargetPos; // 0x18ac            
            float m_flSpeed; // 0x18b8            
            bool m_bTargetingEntity; // 0x18bc            
            bool m_bGroundToTree; // 0x18bd            
            bool m_bTreeToGround; // 0x18be            
            bool m_bTreeToTree; // 0x18bf            
            bool m_bIsSpringJump; // 0x18c0            
            uint8_t _pad18c1[0x3]; // 0x18c1
            float m_fSpringChanneledPercent; // 0x18c4            
            std::int32_t m_nLeapSpeed; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18cc            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x18d8);
    };
};
