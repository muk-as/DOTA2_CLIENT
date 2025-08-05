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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x848
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "string_t m_EffectName"
        #pragma pack(push, 1)
        class CFuncElectrifiedVolume : public source2sdk::server::CFuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_EffectName; // 0x810            
            CUtlSymbolLarge m_EffectInterpenetrateName; // 0x818            
            CUtlSymbolLarge m_EffectZapName; // 0x820            
            CUtlSymbolLarge m_iszEffectSource; // 0x828            
            uint8_t _pad0830[0x18];
            
            // Datamap fields:
            // void InputDisable; // 0x0
            // void InputEnable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncElectrifiedVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncElectrifiedVolume) == 0x848);
    };
};
