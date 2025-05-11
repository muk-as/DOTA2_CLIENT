#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncInteractionLayerClip : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bDisabled; // 0x7a8            
            uint8_t _pad07a9[0x7]; // 0x7a9
            CUtlSymbolLarge m_iszInteractsAs; // 0x7b0            
            CUtlSymbolLarge m_iszInteractsWith; // 0x7b8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncInteractionLayerClip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncInteractionLayerClip) == 0x7c0);
    };
};
