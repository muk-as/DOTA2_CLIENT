#pragma once
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xae0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_EnvDeferredLight : public client::C_ModelPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x820[0x2c0];
        // Datamap fields:
        // CDeferredLightBase CDeferredLightBase; // 0x820
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // Color InputSetLightColor; // 0x0
        // float InputSetLightIntensity; // 0x0
        // CUtlSymbolLarge InputSetLightIntensityOverTime; // 0x0
        // float InputSetLightRadius; // 0x0
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_EnvDeferredLight) == 0xae0);
};
