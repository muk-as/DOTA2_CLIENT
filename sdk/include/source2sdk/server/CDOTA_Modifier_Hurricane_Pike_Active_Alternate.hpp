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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hurricane_Pike_Active_Alternate : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x17f8            
            float m_flEndTime; // 0x1804            
            float m_flCurTime; // 0x1808            
            float enemy_length; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hurricane_Pike_Active_Alternate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hurricane_Pike_Active_Alternate) == 0x1810);
    };
};
