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
        class CLogicCompare : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInValue; // 0x_            
            float m_flCompareValue; // 0x_            
            // m_OnLessThan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLessThan;
            char m_OnLessThan[0x_]; // 0x_            
            // m_OnEqualTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnEqualTo;
            char m_OnEqualTo[0x_]; // 0x_            
            // m_OnNotEqualTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnNotEqualTo;
            char m_OnNotEqualTo[0x_]; // 0x_            
            // m_OnGreaterThan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnGreaterThan;
            char m_OnGreaterThan[0x_]; // 0x_            
            
            // Datamap fields:
            // float InputSetValue; // 0x_
            // float InputSetValueCompare; // 0x_
            // float InputSetCompareValue; // 0x_
            // void InputCompare; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicCompare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicCompare) == 0x_);
    };
};
