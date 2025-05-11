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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tiny_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17f8            
            float m_flPredictedTotalTime; // 0x17fc            
            Vector m_vStartPosition; // 0x1800            
            float m_flCurrentTimeHoriz; // 0x180c            
            float m_flCurrentTimeVert; // 0x1810            
            bool m_bHorizontalMotionInterrupted; // 0x1814            
            bool m_bDamageApplied; // 0x1815            
            bool m_bTargetTeleported; // 0x1816            
            uint8_t _pad1817[0x1]; // 0x1817
            Vector m_vHorizontalVelocity; // 0x1818            
            Vector m_vLastKnownTargetPosition; // 0x1824            
            float m_flInitialVelocityZ; // 0x1830            
            bool m_bDone; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            float radius; // 0x1838            
            std::int32_t toss_damage; // 0x183c            
            std::int32_t bonus_land_damage_pct; // 0x1840            
            float land_debuff_duration; // 0x1844            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tiny_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tiny_Toss) == 0x1848);
    };
};
