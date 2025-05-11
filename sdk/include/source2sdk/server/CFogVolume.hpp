#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFogVolume : public source2sdk::server::CServerOnlyModelEntity
        {
        public:
            CUtlSymbolLarge m_fogName; // 0x7a8            
            CUtlSymbolLarge m_postProcessName; // 0x7b0            
            CUtlSymbolLarge m_colorCorrectionName; // 0x7b8            
            uint8_t _pad07c0[0x8]; // 0x7c0
            bool m_bDisabled; // 0x7c8            
            bool m_bInFogVolumesList; // 0x7c9            
            uint8_t _pad07ca[0x6];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CHandle< CBaseEntity > m_hFogController; // 0x7c0
            // CHandle< CBaseEntity > m_hColorCorrectionController; // 0x7c4
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogVolume) == 0x7d0);
    };
};
