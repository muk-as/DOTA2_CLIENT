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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMathColorBlend : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInMin; // 0x_            
            float m_flInMax; // 0x_            
            Color m_OutColor1; // 0x_            
            Color m_OutColor2; // 0x_            
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Color> m_OutValue;
            char m_OutValue[0x_]; // 0x_            
            
            // Datamap fields:
            // float InputValue; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathColorBlend because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathColorBlend) == 0x_);
    };
};
