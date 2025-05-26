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
        // Size: 0x588
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicCompare : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInValue; // 0x4e0            
            float m_flCompareValue; // 0x4e4            
            // m_OnLessThan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLessThan;
            char m_OnLessThan[0x28]; // 0x4e8            
            // m_OnEqualTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnEqualTo;
            char m_OnEqualTo[0x28]; // 0x510            
            // m_OnNotEqualTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnNotEqualTo;
            char m_OnNotEqualTo[0x28]; // 0x538            
            // m_OnGreaterThan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnGreaterThan;
            char m_OnGreaterThan[0x28]; // 0x560            
            
            // Datamap fields:
            // float InputSetValue; // 0x0
            // float InputSetValueCompare; // 0x0
            // float InputSetCompareValue; // 0x0
            // void InputCompare; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicCompare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicCompare) == 0x588);
    };
};
