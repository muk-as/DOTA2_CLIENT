#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        #pragma pack(push, 1)
        class C_InfoPlayerStartDota : public source2sdk::client::C_PointEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x5e8            
            uint8_t _pad05e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_InfoPlayerStartDota because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_InfoPlayerStartDota) == 0x5f0);
    };
};
