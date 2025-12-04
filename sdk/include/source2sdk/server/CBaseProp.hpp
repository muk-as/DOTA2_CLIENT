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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iShapeType; // 0x_            
            bool m_bConformToCollisionBounds; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_mPreferredCatchTransform; // 0x_            
            
            // Datamap fields:
            // void health; // 0x_
            // CUtlSymbolLarge propdata_override; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0x_);
    };
};
