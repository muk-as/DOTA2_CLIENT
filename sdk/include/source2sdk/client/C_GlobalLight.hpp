#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_GlobalLight : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e8[0x528]; // 0x5e8
            std::uint16_t m_WindClothForceHandle; // 0xb10            
            uint8_t _pad0b12[0x2e];
            
            // Datamap fields:
            // CGlobalLightBase CGlobalLightBase; // 0x5f0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputSetLightScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_GlobalLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_GlobalLight) == 0xb40);
    };
};
