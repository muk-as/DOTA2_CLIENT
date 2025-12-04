#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CSurvivorsPowerUpDamageTickInfo
        {
        public:
            Vector vOrigin; // 0x_            
            Vector vFacing; // 0x_            
            float flTimeLeft; // 0x_            
            float flMagicalDamage; // 0x_            
            float flPhysicalDamage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // vDirections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> vDirections;
            char vDirections[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, vOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, vFacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, flTimeLeft) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, flMagicalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, flPhysicalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo, vDirections) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDamageTickInfo) == 0x_);
    };
};
