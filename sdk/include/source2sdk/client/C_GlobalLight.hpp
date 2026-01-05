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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_GlobalLight : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            std::uint16_t m_WindClothForceHandle; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CGlobalLightBase CGlobalLightBase; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // float InputSetLightScale; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_GlobalLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_GlobalLight) == 0x_);
    };
};
