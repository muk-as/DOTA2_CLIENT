#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ModelPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvDeferredLight : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad_[0x_];
            // Datamap fields:
            // CDeferredLightBase CDeferredLightBase; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // Color InputSetLightColor; // 0x_
            // float InputSetLightIntensity; // 0x_
            // CUtlSymbolLarge InputSetLightIntensityOverTime; // 0x_
            // float InputSetLightRadius; // 0x_
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_EnvDeferredLight) == 0x_);
    };
};
