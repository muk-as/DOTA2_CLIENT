#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMathColorBlend : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInMin; // 0x4d8            
            float m_flInMax; // 0x4dc            
            Color m_OutColor1; // 0x4e0            
            Color m_OutColor2; // 0x4e4            
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Color> m_OutValue;
            char m_OutValue[0x28]; // 0x4e8            
            
            // Datamap fields:
            // float InputValue; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathColorBlend because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathColorBlend) == 0x510);
    };
};
