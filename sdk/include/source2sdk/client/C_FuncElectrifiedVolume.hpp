#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_FuncBrush.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x988
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "string_t m_EffectName"
        // static metadata: MNetworkVarNames "bool m_bState"
        #pragma pack(push, 1)
        class C_FuncElectrifiedVolume : public source2sdk::client::C_FuncBrush
        {
        public:
            source2sdk::client::ParticleIndex_t m_nAmbientEffect; // 0x970            
            uint8_t _pad0974[0x4]; // 0x974
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_EffectName; // 0x978            
            // metadata: MNetworkEnable
            bool m_bState; // 0x980            
            uint8_t _pad0981[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncElectrifiedVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncElectrifiedVolume) == 0x988);
    };
};
