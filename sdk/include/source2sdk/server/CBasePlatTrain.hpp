#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseToggle.hpp"

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
        // Size: 0x898
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlatTrain : public source2sdk::server::CBaseToggle
        {
        public:
            CUtlSymbolLarge m_NoiseMoving; // 0x870            
            CUtlSymbolLarge m_NoiseArrived; // 0x878            
            uint8_t _pad0880[0x8]; // 0x880
            float m_volume; // 0x888            
            float m_flTWidth; // 0x88c            
            float m_flTLength; // 0x890            
            uint8_t _pad0894[0x4];
            
            // Datamap fields:
            // void m_pMovementSound; // 0x880
            // float rotation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlatTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlatTrain) == 0x898);
    };
};
