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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "int m_HiddenDisplacement"
        #pragma pack(push, 1)
        class C_DOTA_DisplacementVisibility : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_HiddenDisplacement; // 0x5e0            
            uint8_t _pad05e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_DisplacementVisibility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_DisplacementVisibility) == 0x5e8);
    };
};
