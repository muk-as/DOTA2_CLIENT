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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tiny_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            float m_flPredictedTotalTime; // 0x_            
            Vector m_vStartPosition; // 0x_            
            float m_flCurrentTimeHoriz; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            bool m_bHorizontalMotionInterrupted; // 0x_            
            bool m_bDamageApplied; // 0x_            
            bool m_bTargetTeleported; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vHorizontalVelocity; // 0x_            
            Vector m_vLastKnownTargetPosition; // 0x_            
            float m_flInitialVelocityZ; // 0x_            
            bool m_bDone; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float radius; // 0x_            
            std::int32_t toss_damage; // 0x_            
            std::int32_t bonus_land_damage_pct; // 0x_            
            float land_debuff_duration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tiny_Toss) == 0x_);
    };
};
