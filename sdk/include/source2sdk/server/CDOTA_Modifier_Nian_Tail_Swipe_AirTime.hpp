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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Tail_Swipe_AirTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flStartZ; // 0x1878            
            float m_flCurTime; // 0x187c            
            float m_flOldPitch; // 0x1880            
            QAngle m_qRotation; // 0x1884            
            std::int32_t m_nRotations; // 0x1890            
            float m_flDistance; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Tail_Swipe_AirTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Tail_Swipe_AirTime) == 0x1898);
    };
};
