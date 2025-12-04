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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_BounceLeap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float give_up_distance; // 0x_            
            float ground_jump_distance; // 0x_            
            float m_flZDelta; // 0x_            
            float perched_day_vision; // 0x_            
            float perched_night_vision; // 0x_            
            Vector m_vStart; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            Vector m_vTargetPos; // 0x_            
            float m_flSpeed; // 0x_            
            bool m_bTargetingEntity; // 0x_            
            bool m_bGroundToTree; // 0x_            
            bool m_bTreeToGround; // 0x_            
            bool m_bTreeToTree; // 0x_            
            bool m_bIsSpringJump; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fSpringChanneledPercent; // 0x_            
            std::int32_t m_nLeapSpeed; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x_            
            float m_flFlightDuration; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BounceLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_BounceLeap) == 0x_);
    };
};
