#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupPathEvent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupPathDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Name of the path entity in the map."
            CUtlString m_strNameInMap; // 0x_            
            // metadata: MPropertyDescription "Speed in units/second."
            float m_flSpeed; // 0x_            
            Vector m_vPathOffset; // 0x_            
            // m_vecPathEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupPathEvent> m_vecPathEvents;
            char m_vecPathEvents[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupPathDefinition, m_strNameInMap) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathDefinition, m_flSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathDefinition, m_vPathOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathDefinition, m_vecPathEvents) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupPathDefinition) == 0x_);
    };
};
