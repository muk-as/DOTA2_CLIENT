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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFogVolume : public source2sdk::server::CServerOnlyModelEntity
        {
        public:
            CUtlSymbolLarge m_fogName; // 0x_            
            CUtlSymbolLarge m_postProcessName; // 0x_            
            CUtlSymbolLarge m_colorCorrectionName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bDisabled; // 0x_            
            bool m_bInFogVolumesList; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // CHandle< CBaseEntity > m_hFogController; // 0x_
            // CHandle< CBaseEntity > m_hColorCorrectionController; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogVolume) == 0x_);
    };
};
