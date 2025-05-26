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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_StickyBombThrow : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            float m_flPredictedTotalTime; // 0x187c            
            Vector m_vStartPosition; // 0x1880            
            float m_flCurrentTimeHoriz; // 0x188c            
            float m_flCurrentTimeVert; // 0x1890            
            bool m_bHorizontalMotionInterrupted; // 0x1894            
            bool m_bDamageApplied; // 0x1895            
            bool m_bTargetTeleported; // 0x1896            
            uint8_t _pad1897[0x1]; // 0x1897
            Vector m_vHorizontalVelocity; // 0x1898            
            Vector m_vLastKnownTargetPosition; // 0x18a4            
            float m_flInitialVelocityZ; // 0x18b0            
            bool m_bDone; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            float radius; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StickyBombThrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_StickyBombThrow) == 0x18c0);
    };
};
