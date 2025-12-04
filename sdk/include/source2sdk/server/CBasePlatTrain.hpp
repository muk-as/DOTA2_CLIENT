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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlatTrain : public source2sdk::server::CBaseToggle
        {
        public:
            CUtlSymbolLarge m_NoiseMoving; // 0x_            
            CUtlSymbolLarge m_NoiseArrived; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_volume; // 0x_            
            float m_flTWidth; // 0x_            
            float m_flTLength; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pMovementSound; // 0x_
            // float rotation; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlatTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlatTrain) == 0x_);
    };
};
