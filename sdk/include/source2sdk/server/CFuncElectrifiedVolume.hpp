#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncBrush.hpp"

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
        // 
        // static metadata: MNetworkVarNames "string_t m_EffectName"
        #pragma pack(push, 1)
        class CFuncElectrifiedVolume : public source2sdk::server::CFuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_EffectName; // 0x_            
            CUtlSymbolLarge m_EffectInterpenetrateName; // 0x_            
            CUtlSymbolLarge m_EffectZapName; // 0x_            
            CUtlSymbolLarge m_iszEffectSource; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputDisable; // 0x_
            // void InputEnable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncElectrifiedVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncElectrifiedVolume) == 0x_);
    };
};
