#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"

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
        // Size: 0x9f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0x9c0            
            uint8_t _pad09c1[0x3]; // 0x9c1
            std::int32_t m_iShapeType; // 0x9c4            
            bool m_bConformToCollisionBounds; // 0x9c8            
            uint8_t _pad09c9[0x7]; // 0x9c9
            CTransform m_mPreferredCatchTransform; // 0x9d0            
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseProp) == 0x9f0);
    };
};
