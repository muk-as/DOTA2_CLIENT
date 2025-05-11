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
        class CDOTA_Modifier_Centaur_Mount_Toss : public source2sdk::client::CDOTA_Buff
        {
        public:
            float air_duration; // 0x17f8            
            std::int32_t air_height; // 0x17fc            
            std::int32_t travel_distance; // 0x1800            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1804            
            float m_flPredictedTotalTime; // 0x1808            
            Vector m_vStartPosition; // 0x180c            
            float m_flCurrentTimeHoriz; // 0x1818            
            float m_flCurrentTimeVert; // 0x181c            
            bool m_bHorizontalMotionInterrupted; // 0x1820            
            bool m_bDamageApplied; // 0x1821            
            bool m_bTargetTeleported; // 0x1822            
            uint8_t _pad1823[0x1]; // 0x1823
            Vector m_vHorizontalVelocity; // 0x1824            
            Vector m_vLastKnownTargetPosition; // 0x1830            
            float m_flInitialVelocityZ; // 0x183c            
            bool m_bDone; // 0x1840            
            uint8_t _pad1841[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Mount_Toss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Centaur_Mount_Toss) == 0x1848);
    };
};
