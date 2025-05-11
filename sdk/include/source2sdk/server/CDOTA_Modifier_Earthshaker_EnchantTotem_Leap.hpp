#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1850
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x4]; // 0x17f8
            Vector m_vLoc; // 0x17fc            
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
            std::int32_t scepter_height; // 0x1840            
            std::int32_t scepter_height_arcbuffer; // 0x1844            
            std::int32_t scepter_acceleration_z; // 0x1848            
            std::int32_t scepter_acceleration_horizontal; // 0x184c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x1850);
    };
};
