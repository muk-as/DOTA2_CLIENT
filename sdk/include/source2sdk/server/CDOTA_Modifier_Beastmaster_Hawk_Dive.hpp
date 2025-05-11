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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_Hawk_Dive : public source2sdk::client::CDOTA_Buff
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
            uint8_t _pad1816[0x2]; // 0x1816
            Vector m_vHorizontalVelocity; // 0x1818            
            Vector m_vLastKnownTargetPosition; // 0x1824            
            float m_flInitialVelocityZ; // 0x1830            
            bool m_bDone; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            std::int32_t dive_damage; // 0x1838            
            float dive_root_duration; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_Hawk_Dive) == 0x1840);
    };
};
