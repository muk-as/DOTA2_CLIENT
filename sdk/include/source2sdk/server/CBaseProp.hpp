#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

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
        // Size: 0x818
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0x7d8            
            uint8_t _pad07d9[0x3]; // 0x7d9
            std::int32_t m_iShapeType; // 0x7dc            
            bool m_bConformToCollisionBounds; // 0x7e0            
            uint8_t _pad07e1[0x3]; // 0x7e1
            matrix3x4_t m_mPreferredCatchTransform; // 0x7e4            
            uint8_t _pad0814[0x4];
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0x818);
    };
};
